#include<bits/stdc++.h>

using namespace std;
bool isSorted(int a[],int n)
{
    // base case --> though no need to compare for n = 0 it's only needed if given by the user
    if(n == 0 || n==1)
    {
        return true;
    }

    // rec case
    if(a[0] < a[1] && isSorted(a+1,n-1)){
        return true;
    }
    
    return false;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);

    cout<< isSorted(arr,n)<<endl;
}