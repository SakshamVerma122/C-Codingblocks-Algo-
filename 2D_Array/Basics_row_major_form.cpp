#include<iostream>
using namespace std;
int main()
{
    //It follows row major form to store
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    
    int *ptr=&arr[0][0];
    ptr=*arr;
    
    //We did this as arr[i] is holding address of 1st,4th,7th,... element
    //What we did above is we gave the address of the arr[0][0]
    for(int i=0;i<9;i++)
    {
        cout<<ptr[i]<<endl;
    }

    cout<<"Various Addresses"<<endl;
    cout<<arr<<endl;
    cout<<*arr<<endl;
    cout<<arr[0]<<endl;
    cout<<&arr[0][0];
}