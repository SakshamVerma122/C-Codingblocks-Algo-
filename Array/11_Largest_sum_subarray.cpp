#include<iostream>
#include<climits>
using namespace std;
int Max_details[3]={};
int* Subarray_sum_cummulative_sum(int *arr,int size)
{
    int arr_cumm[9];

    cout<<"NON-Cummulative array is:";
    
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<"\n";
    arr_cumm[0]=arr[0];
    
    // for (int i = 1; i < size; i++)
    // {
    //     arr[i]+=arr[i-1];
    // }
    
    for(int i=1;i<size;i++)
    {
        arr_cumm[i]=arr[i]+arr[i-1];
    }
    
    cout<<"Cummulative array is:";

    for(int i=0;i<size;i++)
    {
        cout<<arr_cumm[i]<<" ";
    }
    cout<<endl;

    int Global_max_sum=INT_MIN,current_max_sum=INT_MIN,first,last,g_first=0,g_last=0;
    
    for(int i=0;i<size-1;i++)
    {
        cout<<"(";
        for(int j=i+1;j<size;j++)
        {
            cout<<arr_cumm[j]<<",";
            if(current_max_sum<(arr_cumm[j]-arr_cumm[i]+arr[i]))
            {
                current_max_sum=arr_cumm[j]-arr_cumm[i]+arr[i];
                first=i;
                last=j;
            }
        }
            cout<<")\n";
            if(current_max_sum>Global_max_sum)
            {
                Global_max_sum=current_max_sum;
                g_first=first;
                g_last=last;
            }
        
    }
    Max_details[0]=Global_max_sum;
    Max_details[1]=g_first;
    Max_details[2]=g_last;
    return(Max_details);
}
int* Subarray_sum(int *arr,int size)
{
    int Global_max_sum=INT_MIN,Global_max_first,Global_max_last,current_max=0;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            current_max=0;
            for(int k=i;k<=j;k++)
            {
                current_max+=arr[k];
            }
            if(current_max>Global_max_sum)
            {
                Global_max_sum=current_max;
                Global_max_first=i;
                Global_max_last=j;
            }
        }
    }
    Max_details[0]=Global_max_sum;
    Max_details[1]=Global_max_first;
    Max_details[2]=Global_max_last;


    return Max_details;
}
int main()
{
    int arr[]={-4,1,3,-2,6,4,-8,-9,4};
    int *max_sum=Subarray_sum_cummulative_sum(arr,sizeof(arr)/4);

    cout<<"The max sum from the given subarray: "<<max_sum[0];
    cout<<"\nThe Starting Index: "<<max_sum[1];
    cout<<"\nThe Ending Imdex: "<<max_sum[2];
    max_sum=Subarray_sum(arr,sizeof(arr)/4);
    cout<<"The max sum from the given subarray: "<<max_sum[0];
    cout<<"\nThe Starting Index: "<<max_sum[1];
    cout<<"\nThe Ending Imdex: "<<max_sum[2];
}
