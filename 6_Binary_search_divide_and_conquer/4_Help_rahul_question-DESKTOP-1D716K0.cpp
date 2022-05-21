#include<bits/stdc++.h>
using namespace std;

int find(int a[],int n,int key){
    int s = 0,e = n-1;
    while(s<=e)
    {
        int mid = (s+e)/2;
        if(a[mid] == key)
        {
            return mid;
        }
        else if(a[s] <= a[mid])
        {
            //2 case -> element lies on the left or right of the number

            if(key >= a[s] && key <= a[mid])
            {
                e = mid-1;
            }
            else{
                s = mid + 1;
            }
        }
        else 
        {
            if(key >= a[mid] && key<=a[e])
            {
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    int arr[100000],size;

    cin>>size;
    for (int i = 0; i < size; ++i)
    {
        cin>>arr[i];
    }

    int key;
    cin>>key;

    cout<<find(arr,size,key);
}