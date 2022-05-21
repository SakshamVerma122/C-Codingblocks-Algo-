//Setting ith bit means inserting 1 at ith position
//Here you use or operator as you have to change  ith bith only

#include<bits/stdc++.h>
using namespace std;

int main()
{

	int num,i;
	cin>>num>>i;

	int mask = 1<<i;
	num = num | i;

	cout<<" Number after setting ith bit "<<num;

}