#include<iostream>
using namespace std;
bool binarySearch(int *arr,int start,int end,int key)
{
    // base case
    if(start == end)
    if(arr[start] == key)
    {
        return true;
    }
    else
    {
        return false;
    }

    int mid = (start + end)/2;

    // This is to divide the array in parts
    if(key > arr[mid])
    return binarySearch(arr,mid+1,end,key);
    else if(key < arr[mid])
    return binarySearch(arr,start,mid,key);
    else
    return true;
    
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    cout<<binarySearch(arr,0,7,-1);
}