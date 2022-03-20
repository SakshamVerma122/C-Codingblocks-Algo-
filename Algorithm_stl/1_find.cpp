#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[]={1,10,11,9,100};

    int n = sizeof(arr)/sizeof(int);
    //Search --> find
    //inside any container(array/vector)-->similar to linear search

    int key;

    cin>>key;
    auto it = find(arr,arr+n,key);

    cout<<"Address of the element: "<<it<<endl;
    //It return address of the element
    //To get the index you need to subtract the index of 1st element from it
    if((it-arr)==n)
    {
        cout<<"Element not present";  
        //When an element is not present it will return n
    }
    else
    {
        cout<<"Index of the element: "<<it-arr<<endl;
    }
    return 0;
}