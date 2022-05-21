#include<iostream>
using namespace std;
void increment(int a)
{
    a++;
    cout<<"Inside increment function:"<<a;
}
int main()
{
    int a;
    a=10;
    increment(a);
    cout<<"\nOutside increment function:"<<a;
}