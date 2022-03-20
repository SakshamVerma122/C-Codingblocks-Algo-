#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int row;
    cout<<"Enter the number of rows : ";
    cin>>row;
    //char ch_2[1000];//This is to assign memory to the pointer of type char
    char ch_1[1000];
    int max_len=0;
    //char *ch;
    char ch[1000];
    //ch=ch_2;
    for(int i=0;i<row;i++)
    {
        //char ch[1000];
        cin>>ch;
        if(max_len<strlen(ch))
        {
            max_len=strlen(ch);
            strcpy(ch_1,ch);
        }
    }
    cout<<"The string with max_len is: "<<ch_1<<".Whose size is "<<max_len<<endl;
}