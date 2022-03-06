#include<bits/stdc++.h>
using namespace std;

void update_bits(int &num,int place,int update)
{
	
	int mask = 1 << place;
	if(update == 1)
	{
		num = num | mask;
	}
	else
	{
		num = num & ~mask;
	}
}
int main()
{
	int num;
	cin>>num;

	int place;
	cin>>place;

	int update;
	cin>>update;

	update_bits(num,place,update);

	cout<<"Number after being updated"<<num;
}