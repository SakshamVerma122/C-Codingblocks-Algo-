#include<iostream>
using namespace std;

int firstOcc(int *a,int n,int key)
{
    
    //  As you are giving an array of 0 length
    if(n == 0)
    {
        return -1;
    }

    // comparing the first element of the array each time as the pointer moves forward from 0 to n
    //  We are only decreasing the number of elements in the array
    if(a[0]== key){
        // This is returning 0 as we are considering that elemen to be present at 0 and as we are going back the index keeps on increasing thus to get the actual value
        return 0;
    }

    int i = firstOcc(a+1 ,n-1 ,key);

    if(i == -1)
    {
        return -1;
    }

    // This is adding +1 each time after knowing that element is present in the array
    return i + 1;
}

// if you have returned the function itself then the returned value at the base can propagate till the very initial rec-call 
// different Style
int linearSearch(int *a,int i ,int n,int key)
{
    // base case
    if(i == n)
    {
        return -1
    }

    // rec case
    if(a[i] == key)
    {
        return i;
    }

    return linearSearch(a,i+1,n,key)
    //  FOR LOOP
    // linearSearch(array,increment by 1,limit,key)
}
int main()
{
    int arr[]={1,2,3,7,4,5,6,7,10};
    int key = 7;
    int n = sizeof(arr)/sizeof(int);

    cout<<firstOcc(arr, n ,key);
    return 0;
}