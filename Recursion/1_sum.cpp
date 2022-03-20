#include<iostream>
using namespace std;
int sum(int start,int end, int* arr)
{
    // if we get only one element on dividing
    // This is the last case
    if(start == end)
    {
        return arr[start];
    }
    
    // if we get 2 element on dividing
    // This is the last case
    if(start == (end-1))
    {
        return(arr[start]+arr[end]);
    }
    // 
    int mid =(start+end)/2,sum_total;
    
    sum_total = sum(start,mid,arr) + sum((mid+1),end,arr);
    
    return sum_total;
}

int main()
{
    int arr[] ={1,2,3,4,5,6,7,8,9};

    cout<<sum(0,8,arr);
    
    return 0;
}