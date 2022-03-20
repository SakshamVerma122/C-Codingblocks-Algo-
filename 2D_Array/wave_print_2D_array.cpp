#include<iostream>
using namespace std;
int wave_print(int arr[3][3],int rows,int col)
{
    int flag=0;
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<rows;j++)
        {
            if(i%2!=0)
            {
                cout<<arr[rows-j-1][i]<<" ";
            }
            else
            {
                cout<<arr[j][i]<<" ";
            }
        }
        cout<<endl;
    }
    return(0);
}
int wave_print_M2(int arr[3][3],int rows,int col)
{
    for(int i=0;i<col;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<rows;j++)
            {
                cout<<arr[j][i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            for(int j=rows-1;j>=0;j--)
            {
                cout<<arr[j][i]<<" ";
            }
            cout<<endl;
        }
    }
}
//
void reverse_wave_print_adv(int arr[][],int rows,int col)
{
    for (int i = 0; i < col; i++) // as columns are same for longer period of time that row
    {
        int start,end,add;
        if(i%2==0)
        {
            start = rows-1 , end = 0 , add = -1;
        }
        else
        {
            start = 0 , end = rows-1 , add = 1;
        }
        for(int j=start;j<end;j+=add)
        {
            cout<<arr[j][i];
        }
    }

    /*

    /|\---->     /|\
     |     \|/---->
     
    */
    
}
int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    wave_print(arr,3,3);
    
    wave_print_M2(arr,3,3);
    return(0);
}