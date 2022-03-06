#include<iostream>
using namespace std;
void Subset_array_cont_Method_I(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size+1;j++)
        {
            cout<<"(";
            for(int k=i;k<j;k++)
            {
                cout<<arr[k]<<",";
            }
            cout<<")\n";
        }
    }
}
void Subset_array_cont_Method_II(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=1;j<size-i;j++)
        {
            cout<<"(";
            for(int k=i;k<i+j;k++)
            {
                cout<<arr[k]<<",";
            }
            cout<<")\n";
        }
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    Subset_array_cont_Method_I(arr,sizeof(arr)/4);
}