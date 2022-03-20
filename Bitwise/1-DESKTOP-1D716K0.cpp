#include<bits/stdc++.h>
using namespace std;

// Given a list of number find the number which is occuring only once 
// Mainly all the numbers are occuring 2 time except one

int main()
{
	int xor_op,b;
	int count;

	cin>>count;

	cin>>xor_op;
	for (int i = 1; i < count; ++i)
	{
		cin>>b;

		xor_op^=b;
	}

	cout<<xor_op;
}