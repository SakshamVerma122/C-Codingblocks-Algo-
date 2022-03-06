#include<iostream>
using namespace std;
int* Selection_sort(int *arr,int size)
{
    int min;
    //Here we are assuming that arr[i] is the minimum
    for(int i=0;i<size-1;i++)
    {
        min=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
    return(arr);
}
int main()
{
    int arr[100]={10,2,30,4,50,6,70,8},size=8;
    int *p=Selection_sort(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<p[i]<<", ";
    }
    return(0);

}