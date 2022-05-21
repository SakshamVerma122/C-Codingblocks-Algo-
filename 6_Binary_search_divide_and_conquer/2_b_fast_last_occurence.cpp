#include<iostream>
using namespace std;
int Binary_search(int arr[],int size,int key)
{
    int mid,first=0,last=size-1;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(arr[mid] == key)
        {
            return(mid);
        }
        else if(arr[mid] < key)
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
    int arr[] = {1,2,5,8,8,8,8,10,12};
    int last_occur,first_occur;
    int size = sizeof(arr) / sizeof(int);
    cout<<"Enter the value of key";
    int key;
    cin>>key;

    int mid_val = Binary_search(arr,size,key);
    if(mid_val==-1)
    {
        cout<<"Object not present"<<endl;
    }
    else
    {
        first_occur = mid_val;
        last_occur = mid_val;
        int value = -1;
        while(first_occur != value)
        {
            value = first_occur;
            first_occur = Binary_search(arr,first_occur,key);
            
        }
        while(last_occur!=value)
        {
            value = last_occur;
            last_occur = Binary_search(arr+value,size-value,key);
            //last_occur = Binary_search(arr+value,size-value-1,key);
            
        }
    }    
}