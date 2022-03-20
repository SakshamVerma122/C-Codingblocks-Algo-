#include<iostream>
using namespace std;
int *funcn()
{
    int a[]={1,2,3,4,5,6};
    cout<<a<<endl;
    cout<<a[0]<<endl;
    return a;
}
int main()
{
    int *b=funcn();
    cout<<b<<endl;

    //Here it will return 
    //the address as the address will 
    //exist even when variable goes out of scope
    
    cout<<b[0]<<endl;
    return 0;
}
