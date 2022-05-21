#include<iostream>
using namespace std;

int linearSearch(int* arr, int key,int index)
{

    /*
    1-> if index is present 
    */
    if(arr[index] == key)
    {
        cout<<index;
        return 1;
    }
    
    // This means that you have traversed whole array and still not able to find the element
    if(index == 0)
    return 0;

    // This will be called at the second last element of the array
    if (linearSearch(arr, key,index-1)==0)
    {
        cout<<"element not present";
    }

    return 2;
}

int main()
{
    int arr[] ={1,20,3,40,5,60,7,8},size = 7;
    linearSearch(arr,40,size);
    return 0;
}