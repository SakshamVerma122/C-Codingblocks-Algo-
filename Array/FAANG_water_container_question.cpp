#include<bits/stdc++.h>
using namespace std;
int mnain()
{
    int arr[100000],int count;

    // Taking input number of elements
    cin>>count;

    for(int traverse = 0; traverse < count;traverse++)
    {
        cin>>arr[traverse];
    }

    // Calculating the water storage
    int waterTotal = 0;

    for(int traverse = 1; traverse < count;traverse++)
    {   
        // traverse the wall from top to bottom
        for(int height = arr[traverse];height > 0;height--)
        {
            int pre_water_traverse = 0;
            int placeholder = traverse;
            
            // to exclude the current wall
            traverse -= 1;
            
            while(traverse > 0 && arr[traverse] < height)
            {
                pre_water_traverse +=1; 
                traverse--;
            }
            if(arr[traverse+1] >= height)
            {
                waterTotal +=pre_water_traverse;
            }
        }
    }
}
