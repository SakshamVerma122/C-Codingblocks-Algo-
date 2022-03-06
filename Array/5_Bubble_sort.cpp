#include<iostream>
using namespace std;

//Asscending order
int* Bubble_sort(int *arr,int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=1;j<size-i;j++)
        {
            if(arr[j-1]>arr[j])
            {
                swap(arr[j-1],arr[j]);
            }
        }
    }
    return arr;
}

/*Descending order
int* Bubble_sort_Desc(int *arr,int size)
{
   for(int i=0;i<size-1;i++)
    {
        for(int j=size-1;j>i;j--)
        {
            if(arr[j-1]<arr[j])
            {
                swap(arr[j-1],arr[j]);
            }
        }
    }
    return arr;
}
*/
int* Bubble_sort_Desc(int *arr,int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=1;j<size-i;j++)
        {
            if(arr[(size-j)-1]<arr[size-j])
            {
                swap(arr[(size-j)-1],arr[size-j]);
            }
        }
    }
    return arr;
}

int main()
{
    int arr[100]={10,2,30,400,50,6,70,8},size=8;
    int *p=Bubble_sort(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<p[i]<<
        ", ";
    }
    cout<<endl<<"In Descending order"<<endl;
    p=Bubble_sort_Desc(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<p[i]<<", ";
    }
    return(0);
}