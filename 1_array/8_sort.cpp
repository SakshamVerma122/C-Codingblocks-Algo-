#include<iostream>
#include<algorithm>
using namespace std; 
bool compare(int a,int b)
{
    return(a>b);
}

bool print(int a,int b)
{
    cout<<"Comparing: ("<<a<<","<<b<<")"<<endl;
    return a<b;
}

int main()
{
    int arr[100]={10,2,30,400,50,6,70,8},size=8;
    sort(arr,arr+size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<", ";
    } 
    // For descending order
    cout<<endl<<"For Descending function:"<<endl;
    sort(arr,arr+size,compare);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<", ";
    }
    sort(arr,arr+size,print);
}