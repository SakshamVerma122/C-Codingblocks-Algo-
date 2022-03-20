#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char ch[1000][1000];
    int row,column;
    cout<<"Enter the number of rows and column: ";
    cin>>row>>column;
    for(int i=0;i<row;i++)
    {
        cin>>ch[i];
    }
    int max_len=strlen(ch[0]);
    char ch_1[1000];
    strcpy(ch_1,ch[0]);
    for(int i=1;i<row;i++)
    {
        if(max_len<strlen(ch[i]))
        {
            max_len=strlen(ch[i]);
            strcpy(ch_1,ch[i]);
        }
    }
    cout<<"The string with max_len is: "<<ch_1<<".Whose size is "<<max_len<<endl;
}