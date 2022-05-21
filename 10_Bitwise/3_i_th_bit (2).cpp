#include<bits/stdc++.h>

using namespace std;
int main()
{
	//Check the ith bit

	int num;
	cin>>num;

	int i;
	cin>>i;

	i = 1 << i; 


	int a = (num & i);//It's important to put ()

	//Here also put bracket
	cout<<"The number at ith position: "<<(a>0?1:0);
	
	// The underlying one is wrong as we are performing bitwise & opeartion
	// cout<<"The number at ith position: "<<a;

	cout<<endl<<(1<<0); //This is equivalent to 1
}