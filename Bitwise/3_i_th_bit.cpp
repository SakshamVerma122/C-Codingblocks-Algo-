#include<bits/stdc++.h>

using namespace std;
int main()
{
	//Check the ith bit

	int n;
	cin>>n;

	int i;
	cin>>i;

	i = 1 << i; 


	int a = (n & i);//It's important to put ()
	cout<<"The number at ith position: "<<(a>0?1:0);
	//Here also put bracket
}