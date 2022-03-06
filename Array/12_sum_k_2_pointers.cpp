#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ptr_1=0,ptr_2,size,arr[100];

    cout<<"Enter the number of elements you want";
    cin>>size;

    ptr_2=size-1;

    cout<<"Enter the element of arrays...\n";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+size);

    int key;
    cout<<"Eneter the value of key";
    cin>>key;
    
    while(ptr_1<ptr_2)
    {
        if(arr[ptr_1]+arr[ptr_2]<key)
        {
            ptr_1++;
        }
        else if(arr[ptr_1]+arr[ptr_2]>key)
        {
            ptr_2--;
        }
        else
        {
            cout<<"("<<arr[ptr_1]<<" ,"<<arr[ptr_2]<<")"<<endl;
            ptr_2--;
            ptr_1++;
        }
    }
    return 0;
}