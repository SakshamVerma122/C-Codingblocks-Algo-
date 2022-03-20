#include<iostream>
using namespace std;
int main()
{
    //Static allocation-> allocation and deallocation is done by compiler
    int b[100];
    cout<<"Size of b:"<<sizeof(b)<<endl;
    cout<<b<<endl;  //symbol table
    // 'b'-> can't be overwritten
    //Dynamic allocation
    int n;
    cout<<"Enter the number of dynamic values u want to create "<<endl;
    cin>>n;
    
    //Creating a dynamic array which is initialised with all 0s
    int *a = new int[n]{0};
    
    //Dynamic array not initialised with all 0s
    //int *a = new int[n]
    cout<<"Size of a: "<<sizeof(a)<<endl;
    cout<<a<<endl; //variable 'a' that is created inside the static memory-> can be overwritten 

    //getting and accessing the values of dynamic array
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cout<<a[i]<<endl;
    }

    //Free up the space
    delete[] a;
    return 0;
}