#include<iostream>
using namespace std;
void Subset_array_cont(int *arr,int size)
{
    for(int i=1;i<size;i++)//Number of elements in the group
    for(int k=0;k<size-i;k++)//for 1st element in the group
    {
        cout<<"(";
        for(int j=k;j<=k+i;j++)//for traversing i elements
        {
            if(j!=k+i)
            cout<<arr[j]<<","; 
            else
            cout<<arr[j];
        }
        cout<<")"<<endl;
    }
}
int main()
{
    int arr[100]={1,2,3,4,5,6,7,8},size=8;
    Subset_array_cont(arr,size);
    return(0);
}

/*for(int i=0;i<n;i++)
{
    for(int j=i;j<n;j++)
    {
        for(int k=i;k<=j;k++)
        {
            cout<<a[k]<<",";
        }
        cout<<endl;
    }
}