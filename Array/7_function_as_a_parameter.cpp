#include<iostream>
using namespace std;

bool cmp(int a,int b)
{
    return(a>b);
}

void Bubble_sort(int arr[],int n,bool (&cmp)(int a,int b))
{
    int i,j;
    for(i=0;i<n-1;i++)
    for(j=1;j<n-i;j++)
    {
        if(cmp(arr[j-1],arr[j]))
        {
            swap(arr[j-1],arr[j]);
        }
    }
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4];
}
int main()
{
    int arr[]={1,20,12,3,14},n=5;
    Bubble_sort(arr,n,cmp);
    
}

