#include<iostream>
using namespace std;
int Binary_search(int arr[],int size,int key)
{
    int mid,first=0,last=size-1;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(arr[mid]==key)
        {
            return(mid);
        }
        else if(arr[mid]<key)
        {
            first=mid+1;
        }
        else
        {
            last=mid-1;
        }
    }
    return(-1);

}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    Binary_search(arr,10,6);
}