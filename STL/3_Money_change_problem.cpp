#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int coins[]={1,2,5,10,20,50,100,500,2000};
    int money;

    cin>>money;
    while(money>0)
    {
        int *change=lower_bound(coins,coins+9,money);
        if(*change > money)
        {
            change=change-1;
        }
        money-=*change;
        cout<<*change<<" ,";
        
    }
}