#include<iostream>
using namespace std;
int main()
{
    int col,rows;
    cout<<"Enter the number of rows and column";
    cin>>rows>>col;
    int **a=new int*[rows];
    
    //Creating rows... assigning address of 1D array to **a
    for(int i=0;i<rows;i++)
    {
        //a[i]= new int[col];
        *(a+i) = new int[col]; //By changing col value you can create a 2D array with variable columns
        
        //derefference of **a is done via *a(contains address of the pointer variable)
        //**a contains value of the variable pointed by the pointer variable whose address is *a
    }
    cout<<"Enter the numbers";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<col;j++)
        cin>>*(a[i]+j);
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<*(*(a+i)+j)<<" ";
        }
        cout<<endl;
    }
}