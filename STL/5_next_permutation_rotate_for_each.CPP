#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50};

    int n=sizeof(arr)/sizeof(int);

    //rotate(starting_pt,middle,end_pt);
    rotate(arr,arr+2,arr+n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //Important funcn of rotate
    rotate(arr+1,arr+2,arr+3);


    vector<int> v{10,20,30,40,50};
    rotate(v.begin(),v.begin()+3,v.end());
    
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    //Next permutation
    next_permutation(v.begin(),v.end());

    //for each  loop
    cout<<endl;
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
} 