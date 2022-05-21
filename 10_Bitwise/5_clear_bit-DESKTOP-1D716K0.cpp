// Removing bit at ith position

#include<bits/stdc++.h>
using namespace std;

void clear_bit(int &num,int i)
{
	int mask = ~(1<<i);
	num = num & mask;
}

int main()
{
	int num,i;
	cin>>num>>i;

	clear_bit(num,i);

	cout<<"Number after removing bit at ith position: "<<num;
}