#include<iostream>
using namespace std;
void Insertion_sort(int *arr,int size)
{
    for(int i=1;i<size;i++)
    {
        while(arr[i-1]>arr[i] && i>0)
        {
            swap(arr[i-1],arr[i]);
            i--;
        }
    }
}

int main()
{
    int arr[100]={10,2,30,400,50,6,70,8},size=8;
    Insertion_sort(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<", ";
    }
    return(0);
}