//Setting ith bit means inserting 1/0 at ith position
//Here you use 'or' operator as you have to change ith bith only
//ith bit from the end
//    6,5,4,3,2,1,0 bits from the end

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num,i;
	cin>>num>>i;

	int mask = 1<<i;
	num = num | mask;

	cout<<"Number after setting ith bit "<<num;
}