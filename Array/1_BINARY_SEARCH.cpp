#include<iostream>
using namespace std;
int Binary_search(int *arr,int size,int reqd)
{
    int mid,first=0,end=size-1;
    while(true)
    {
        mid=(first+end)/2;
        
        if(arr[mid]==reqd)
        {
            cout<<"Elemet found at :"<<mid;
            break;
        }
        else if(mid==first && first==end)
        {
            cout<<"Element not found...";
            break;
            // all the commands after this is for !=
        }// reason we put this first of all as if arr[mid]!=reqd then it will enter the other 2 conditions and then first=mid+1/end=mid-1 will be applied and the array will go out of index and will give output for garbage value
        else if(arr[mid]<reqd)
        {
            first=mid+1;
        }
        else
        {
            end=mid-1;
        }
        
    }
    return 0;

}
int Binary_search_CODING_BLOCKS(int *arr,int size,int reqd)
{
    int start=0,end=size-1;
    int mid;
    while(start <= end)
    {
        mid = (start+end)/2;
        if(arr[mid] == reqd)
        {
            cout<<"Element Found";
            return(mid);
        }
        else if(arr[mid] > reqd)
        {
            end = mid-1;
        }
         else 
        {
            start=mid+1;
        }

    }
    // if(arr[mid]!=reqd)
    // {
    //     cout<<"element not found"<<endl;
    //     return(mid);
        
    // }
    return(-1);
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    Binary_search(arr,10,10);
    cout<<endl;
    int position;
    if((position = Binary_search_CODING_BLOCKS(arr,10,-90))!=-1)
    {
        cout<<"ELEMENT FOUND AT INDEX"<<position;
    }
    else
    {
        cout<<"Element not found";
    }
return 0;
}