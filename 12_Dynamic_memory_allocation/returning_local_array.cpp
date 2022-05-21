#include<iostream>
using namespace std;
int *funcn()
{
    int a[]={1,2,3,4,5,6};

    /* 
        static int a[]={1,2,3,4,5,6};
        int *a=new int[6];
        because of these it will remain in the memory till the end of the program
    */
    
    cout<<a<<endl;
    cout<<a[0]<<endl;
    return a;
}
int main()
{
    int *b=funcn();
    cout<<"address"<<b<<endl;

    //Here it will return 
    //the address as the address will 
    //exist even when variable goes out of scope

    cout<<b[0]<<endl;

    //delete[] b; //must be called if you have initialised using Dynamic memory allocation
    return 0;
}
