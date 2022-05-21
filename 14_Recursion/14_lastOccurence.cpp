#include<iostream>
using namespace std;
int lastOccuremce(int *arr,int n,int key)
{
    if(arr[n] == key)
    return n;

    if(n == 0)
    return -1;

    return lastOccuremce(arr,n-1,key);
    
}
int lastOccurenencePrac(int *arr,int n,int key)
{
    // base case
    if(n == 0)
        return -1;

    int sub = lastOccurenencePrac(arr+1,n-1,key);

    return sub;

    if(arr[0] == key)
        return 0;
    
    if(sub == -1)
    return -1;
    else 
    return sub+1;
}
int main()
{
    int arr[]={1,2,3,7,4,5,6,7,10};
    int key = 10;
    int n = sizeof(arr)/sizeof(int);

    cout<<lastOccurenencePrac(arr, n, key);
    return 0;
}