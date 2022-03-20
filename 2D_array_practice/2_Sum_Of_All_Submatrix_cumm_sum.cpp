#include<bits/stdc++.h>
using namespace std;
int main()
{
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

	//cum-sum
	for (int i = 0; i < row; ++i)
	{
		for (int j = 1; i < col; ++j)
		{
			arr[i][j] += arr[i][j-1];
		}
	}

	
}