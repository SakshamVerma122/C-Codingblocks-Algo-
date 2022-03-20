//Pointer in detail->https://ide.codingblocks.com/s/312829
//Pointer_address_of_an_array->https://ide.codingblocks.com/s/281353

#include<iostream>
using namespace std;
int main()
{
    int x=100;
    float y=10;
    cout<<&x<<endl;
    cout<<&y<<endl;
    char ch ='A';
    //It doesn't happen in char
    cout<<&ch<<endl;
    cout<<(int*)(&ch)<<endl;//Explicit typecasting can help but the no of bytes changes
    cout<<"SIZE of type casted:"<<sizeof((double*)(ch))<<endl;
    cout<<"SIZE of type casted:"<<sizeof((int*)(ch))<<endl;
    cout<<"SIZE of non-type casted:"<<sizeof(ch)<<endl;

    //Size of all the pointers are the same;
    int *ptr=NULL;
    char *ptr_1=NULL;
    cout<<"SIZE of int pointer:"<<sizeof(ptr)<<endl;
    cout<<"SIZE of char pointer:"<<sizeof(ptr_1)<<endl;
    return 0;
}