// https://hack.codingblocks.com/app/practice/1/1051/problem
//https://discuss.codingblocks.com/t/it-shows-two-test-cases-wrong/97423
/*
Enters the park with strength S. 
(.)-> -2. 
(' * ')->+5. 
Piyush can only walk row wise.
Moves left->right.
Blockade (#) cannot go any further in his current row and simply jumps to the start of a new line without losing any strength.
Piyush requires a strength of 1 for every step.
Strength should always be greater than K while traversing or else Piyush will get lost.
Piyush can shift immediately from last of one row to the start of next one without loss of any strength.
His escape is successful if he is able to return home with atleast K strength.
*/
/*
Piyush enters the park with strength S. The park is filled with some obstacles denoted by ‘.’ , some magical beans denoted by ‘*’ and some blockades denoted as ‘#’. If he encounters an obstacle (.) , strength decreases by 2. If he encounters a magic bean (' * ') , his strength increases by 5. Piyush can only walk row wise, so he starts from left of a row and moves towards right and he does this for every row. However when he encounters a blockade (#) , he cannot go any further in his current row and simply jumps to the start of a new line without losing any strength. Piyush requires a strength of 1 for every step. His strength should always be greater than K while traversing or else Piyush will get lost. Assume that Piyush can shift immediately from last of one row to the start of next one without loss of any strength, help out Piyush to escape the park. His escape is successful if he is able to return home with atleast K strength.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	char garden[100][100];

	int N,M,K,S;   //N->rows,M->col,K->least_strength,S->strength eith which he entered

	cin>>N>>M>>K>>S;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			cin>>garden[i][j];
		}
	}
	
	int counter_row,counter_col;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			counter_col = j;
			counter_row = i;
			if(S>=K && S>0)
			{
				if(garden[i][j] == '.')
					S-=3;
				else if(garden[i][j] == '*')
					S+=4;
				else if(garden[i][j] == '#')
				{
					S-=1;// We have subtracted 1 as it will be compensated with S+=1 which is on line 131
					break;
				}
		    }
		    else
		    {
		    	i=N;break;//I have used i = N here as to exit from both the loops not only exiting from j loop
		    }
		}
		S+=1;  //To compensate -1 in each step above
	
	}

	if(counter_col == M-1 && counter_row == N-1 && garden[counter_col][counter_row] !='#' )
	{
		S-=1; 
		// it's basically checking whether we have exited from the last block and that last block doesn't contain '#'
		// as if it contains # then  it will not need any energy for exitting--> similar for encountering every '#' in row N-1
	}
	if(S>=K)
	{
		cout<<"Yes"<<endl<<S;
	}
	else
	{
		cout<<"No";
	}
	return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
	char garden[100][100];

	int N,M,K,S;   //N->rows,M->col,K->least_strength,S->strength eith which he entered

	cin>>N>>M>>K>>S;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			cin>>garden[i][j];
		}
	}
	
	int counter_row,counter_col;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			counter_col = j;
			counter_row = i;
			if(S>=K)
			{
				if(garden[i][j] == '.')
					S-=3;
				else if(garden[i][j] == '*')
					S+=4;
				else if(garden[i][j] == '#')
				{
					if(i!=N-1)
					{i+=1;j=-1;S-=1;}
					else
					{
						S-=1;
						i+=1;break;
					}
				}
		    }
		    else
		    {
		    	i=N;break;
		    }
		}
		S+=1;
		//cout<<S<<endl;
	}

	if(counter_col==M-1 && counter_row==N-1 && garden[counter_col][counter_row]!='#')
	{
		S-=1;
	}
	if(S>=K)
	{
		cout<<"Yes"<<endl<<S;
	}
	else
	{
		cout<<"No";
	}
	return 0;
}*/

/*
Piyush enters the park with strength S. The park is filled with some obstacles denoted by ‘.’ , some magical beans denoted by ‘*’ and some blockades denoted as ‘#’. If he encounters an obstacle (.) , strength decreases by 2. If he encounters a magic bean (' * ') , his strength increases by 5. Piyush can only walk row wise, so he starts from left of a row and moves towards right and he does this for every row. However when he encounters a blockade (#) , he cannot go any further in his current row and simply jumps to the start of a new line without losing any strength. Piyush requires a strength of 1 for every step. His strength should always be greater than K while traversing or else Piyush will get lost. Assume that Piyush can shift immediately from last of one row to the start of next one without loss of any strength, help out Piyush to escape the park. His escape is successful if he is able to return home with atleast K strength.
*/
