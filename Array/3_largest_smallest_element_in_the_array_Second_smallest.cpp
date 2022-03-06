#include<iostream>
using namespace std;
int second_smallest(int *arr,int size)
{
    int smallest = arr[0];
    int sec_smallest = INT_MAX;

    // We can't initialise sec_smallest with arr[0] as then it will be hard to re-initialse it for getting sec_smallest 

    for (int i = 1; i < size; i++)
    {
        if(arr[i]<smallest)
        {
            sec_smallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] == smallest)
        {
            continue;
            // THis is very important
        }
        else if(arr[i] < sec_smallest)
            sec_smallest = arr[i];

    }
    // Basically we are checking firstly for the smallest and then just substituting it with the previous-smallest.Thus making the previously smallest sec_smallest

    // else if(arr[i] < sec_smallest) Here we are checking second_smallest with respect to other numbers only to make a check whether the second_smallest retains its space or is needed to be substituted
    
    return sec_smallest;
}
int second_largest(int *arr,int size)
{
    int largest = arr[0];
    int sec_largest = INT_MIN;

    // We can't initialise sec_largest with arr[0] as then it will be hard to re-initialse it for getting sec_largest

    for (int i = 1; i < size; i++)
    {
        if(arr[i]>largest)
        {
            sec_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] == largest)
        {
            continue;
            // as the above if-statement don't caters == as it has to change sec_largest too
        }
        else if(arr[i] > sec_largest)
            sec_largest = arr[i];

    }
    // Basically we are checking firstly for the largest and then just substituting it with the previous-largest.Thus making the previously largest sec_largest

    // else if(arr[i] < sec_smallest) Here we are checking second_largest with other number as to check whether the second_largest retains its space or is needed to be substituted
    
    return sec_largest;
}
int main()
{
    
    int arr[]={7 ,3 ,5 ,8 ,4};
    cout<<second_largest(arr,5)<<endl;
    cout<<second_smallest(arr,5);
    return 0;
}