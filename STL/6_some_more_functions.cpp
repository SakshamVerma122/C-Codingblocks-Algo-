#include<iostream>
#include<algorithm>
using namespace std;
int main()
{

    int a = 10; 
    int b = 20;

    swap(a,b);

    cout<<"After being SWAPPED"<<a<<" and "<<b<<endl;
    cout<<"After max(a,b)"<<max(a,b)<<endl;
    cout<<"After min(a,b)"<<min(a,b)<<endl;

    int arr[]={1,2,3,4,4,5};

    reverse(a,a+4);

    int n = sizeof(arr)/sizeof(int);

    for(int x:arr)
    {
        cout<<x<<" ,";
    }

    swap(arr[0],arr[1]);
    cout<<endl;
    for(int x:arr)
    {
        cout<<x<<" ,";
    }

    return 0;
}