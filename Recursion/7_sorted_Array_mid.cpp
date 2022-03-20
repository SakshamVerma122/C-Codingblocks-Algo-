#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[],int start,int end)
{
    if(start == end)
    {
        return true;
    }
    else if(start == (end-1))
    {
        if(arr[start] <= arr[end])
        return true;
        else
        return false;
    }
    int mid = (start+end)/2;

    return((arr[mid]<=arr[mid+1]) && isSorted(arr,start,mid) && isSorted(arr,(mid+1),end));
}
int main()
{
     int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);

    cout<< isSorted(arr,0,n-1)<<endl;
    return 0;
}