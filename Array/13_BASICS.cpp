#include<iostream>
using namespace std;

int main(){
    
    // Init of an array
    int a[10]={1,2,3};

    // Input all the element from the user
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }

    // Print all the first 10 elements
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }

    cout<< "\nsize of long long "<<sizeof(long long);

    // Update sibgle index
    a[2]=10;

    // size of array
    int size = sizeof(a)/sizeof(a[0]);
}