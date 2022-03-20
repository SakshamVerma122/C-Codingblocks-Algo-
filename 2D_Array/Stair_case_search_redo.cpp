#include<iostream>
using namespace std;
int reqd_row_col_arr[2];
int row_search(int arr[5][5],int ele_reqd)
{
    int row=0;
    while(arr[row][4]<ele_reqd)
    {
        row++;
    }
    return(row);
}
int column_search(int arr[5][5],int ele_reqd,int *row_number)
{
    int col=4;
    while(arr[*row_number][col] != ele_reqd && col>-1 && (*row_number)<5)
    {
        if(arr[*row_number][col]>ele_reqd)
        {
            col--;
        }
        else if(arr[*row_number][col]<ele_reqd)
        {
            row_number++;
        }
        else
        {
            return(col);
        }
    }
}
int *straircase_search(int arr[5][5],int ele_reqd)
{
    //Firstly search for row
    int row_number=row_search(arr[5][5],ele_reqd);
    int column_number=column_search(arr[5][5],ele_reqd,&row_number);
    reqd_row_col_arr[0]==row_number;
    reqd_row_col_arr[1]==column_number;
    
    return(reqd_row_col_arr);
}
int main()
{
    int arr[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    int *row_col=straircase_search(arr[5][5],6);
    if(row_col[0]!=5 && row_col[1]!=-1)
    {
        cout<<"The element is present at "<<row_col[0]<<"th row and "<<row_col[0]<<"th column .";
    }
    else
    {
        cout<<"The element is not present";
    }
}