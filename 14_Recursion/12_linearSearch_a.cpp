#include<iostream>
using namespace std;
int linearSearch(int* arr,int currentIndex,int key)
{
    // base key
    if(currentIndex == 0 && arr[currentIndex] != key)
    return -1;

    // rec case
    if(arr[currentIndex] == key)
    {
        cout<<"Element present at "<<currentIndex;
        return 1;
    }
    else
    {
        // rec call
        int sub = linearSearch(arr,currentIndex-1,key);
    
        if(sub == -1)
        {
            cout<<"Element not present";
        }
    }
    
}

int main()
{
    int arr[] ={1,20,3,40,5,60,7,8},size = 7;
    linearSearch(arr,size,-90);
    return 0;
}