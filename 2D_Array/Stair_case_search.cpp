#include<iostream>
#include<algorithm>
using namespace std;
int binary_search(int arr[5],int ele_reqd)
{
    int first=0,last=4,mid;
    while(true)
    {
        mid=(first+last)/2;
        if(mid==first && first==last && arr[mid]!=ele_reqd)
        {
            return(-1);
        }
        else if(arr[mid]==ele_reqd)
        {
            return(mid);
        }
        else if(arr[mid]>ele_reqd)
        {
            last=mid-1;
        }
        else if(arr[mid]<ele_reqd)
        {
            first=mid+1;
        }
    }
}
int *row_col[2];
int** stair_case_search(int arr[5][5],int ele_reqd)
{
    int row_number[5]={-1,-1,-1,-1,-1},column_number[5]={-1,-1,-1,-1,-1};// here column_number[25]={-1,-1,-1,-1,-1.........},row_number[25]={-1,-1,-1,-1,-1.........}
    int row_counter=0,column_counter=4;
    while(ele_reqd<arr[row_counter][column_counter])
    {
        ++row_counter;
        // here we will get the row 
    }
    while(arr[row_counter][column_counter]!=ele_reqd && arr[row_counter][4]==ele_reqd)
    {
        column_counter = binary_search(arr[row_counter],ele_reqd);
        column_number[column_counter]=column_counter;
        row_number[row_counter]=row_counter;
        row_counter+=1;
    }
    
    row_col[0]=row_number;
    row_col[1]=column_number;

    return(row_col);  
}
int main()
{
    int arr[5][5]={{1,2,3,4,5},{2,3,4,5,6},{7,8,9,10,11},{12,13,14,15,16},{14,15,16,17,18}};
    int ele_reqd=4;
    int **row_col=stair_case_search(arr[5][5],ele_reqd);
}