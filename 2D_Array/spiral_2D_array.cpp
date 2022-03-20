#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;


	int value = 0,arr[100][100];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			arr[i][j] = value++;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	int while_var=n; 
	n-=1;
	int count = 1;
	int subtract;
	while(count <= (2*while_var-1))
	{
		subtract = count / 4; //This is to be subtracted from row/col

		if(count % 2 == 1)
		{
			//Row traverse

			if(count % 3 ==0)
			{
				// -ve Row traverse
				for (int i = n-subtract-1; i >= subtract; --i)
				{
					cout<< arr[n-subtract][i]<<" ";
				}
			}
			else
			{
				// +ve Row traverse
				for (int i = subtract; i <= n - subtract; ++i)
				{
					cout<<arr[subtract][i]<<" ";
				}
			}
		}
		else
		{
			//Col traverse
			if(count % 4 == 0)
			{
				 //-ve Col traverse
				for (int i = n-subtract; i >= subtract; --i)/////
				{
					cout<<arr[i][subtract-1]<<" ";
				}
			}
			else
			{
				 //+ve Col traverse
				 for (int i = subtract+1; i <= n - subtract; ++i)
				 {
				 	cout<<arr[i][n-subtract]<<" ";
				 }
			}
		}
		count++;
		cout<<endl;
	}
	cout<<endl<<sizeof(long);
}