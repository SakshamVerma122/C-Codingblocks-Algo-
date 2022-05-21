#include<iostream>
using namespace std;

int Linear_search(int *arr,int size,int reqd)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i] ==reqd)
        {
            return(i);
        }
    }
    return(-1);
}

int main()
{

    int arr[100]={1,2,3,4,5,6,7,8},size=8,reqd=4;
    int posn = Linear_search(arr,size,reqd);
    if(posn == -1)
    {
        cout<<"The element is not present";    
    }
    else
    cout<<"The element is present at "<<posn;
}