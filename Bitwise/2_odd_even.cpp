#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a;

	cin>>a;

	//Important precedence of == > &
	if((a & 1) == 0)
	{
		cout<<"It's even";
	}
	else
	{
		cout<<"It's Odd";
	}
}