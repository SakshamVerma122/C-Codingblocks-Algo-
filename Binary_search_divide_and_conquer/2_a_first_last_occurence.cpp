#include<bits/stdc++.h>
using namespace std;

int first_occurence(int a[],int n,int key)
{
    int s = 0,e = n-1;
    
    int ans = -1;
    // Update in a direction that ans values gets lower and lower
    // as if the answer value is getting lower and it will ensure that we are aiming for first occurence
    // as sorted in ascending order

    while(s <= e)
    {
        int mid = (s+e)/2;
        if(a[mid] == key)
        {
            //Do two things
            ans = mid;
            e = mid-1;
        }
        else if(a[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

int last_occurence(int a[],int n,int key)
{
    int s = 0,e = n-1;
    
    int ans = -1;
    // Update in a direction that ans values gets higher and higher
    // as if the answer value is getting higher and it will ensure that we are aiming for last occurence
    // as sorted in ascending order

    while(s <= e)
    {
        int mid = (s+e)/2;
        if(a[mid] == key)
        {
            //Do two things
            ans = mid;
            s = mid+1;
        }
        else if(a[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int arr[]={1,2,3,3,3,3,4,4,5,5,5,5,6},size = sizeof(arr)/sizeof(int);
    
    int key;
    cin>>key;

    //First and last occurenece of a sorted array..

    cout<<first_occurence(arr,size,key)<<endl;
    cout<<last_occurence(arr,size,key)<<endl;
    
    return 0;
}