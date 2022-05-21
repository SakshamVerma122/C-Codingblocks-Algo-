#include<iostream>
using namespace std;

int fact(int num)
{
    // Base case
    if(num ==1 || num==0)
    return 1;

    // recursive case
    return num * fact(num-1);
}
int fact_new(int num)
{
    // Base case
    if(num ==1 || num==0)
    return 1;

    // recursive case
    int small_ans = fact(num-1);
    int ans = num * small_ans;
    return ans;
}
int main()
{
    cout<<fact(5);
    cout<<fact(4);
}