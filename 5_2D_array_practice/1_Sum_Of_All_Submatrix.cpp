#include<bits/stdc++.h>
using namespace std;

int main()
{
	//TIME COMPLEXITY-->O(n^6)
	//SPACE COMPLEXITY-->O(1)
	int arr[100][100],row,col;
	cin>>row>>col;

	for(int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; ++j)
		{
			cin>>arr[i][j];
		}
	}

	int sum=0;

	//(i,j)-->first_point in the rectangle,(k,l)-->last_point in the rectangle

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			for (int k = i; k < row; ++k)
			{
				for (int l = j; l < col; ++l)
				{
					for(int ptr_row = i ;ptr_row <= k ; ptr_row++)
					{
						for (int ptr_col = j; ptr_col <=l; ++ ptr_col)
						{
							sum+=arr[ptr_row][ptr_col];
						}
					}
				}
			}
		}
	}


	cout<<"Sum of all sub matrix-->"<<sum;
}