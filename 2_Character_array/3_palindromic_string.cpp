#include<iostream>
#include<cstring>
using namespace std;
void palindrome(char ch[])
{
    int length=strlen(ch),flag=0;
    cout<<"The Length of ch is "<<length<<endl;
    for(int i=0;i<length/2;i++)
    {
        if(ch[i]!=ch[length-1-i])
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<"The string is not a palindrome"<<endl;
    }
    else
    {
        cout<<"The string is a palindrome"<<endl;
    }
}
bool palindrome_coding_blocks(char ch[])
{
    int i=0;
    int length=strlen(ch)-1;
    while(i<length)
    {
        if(ch[i]==ch[length])
        {   
            i++;
            length--;
        }
        else
        {
            cout<<"ch[i] "<<i<<"ch[length] "<<length<<endl;
            return(false);
        }
    }
    return(true);
}
int main()
{
    char ch[1000];
    cin.getline(ch,1000,'$');
    palindrome(ch);
   /* char ch_3[1000];
    cin>>ch_3;
    cout<<endl<<ch_3<<endl; */
    cin.get();//Very IMP as consumes '\n' for both cin>>ch_3 and cin.getline(ch,1000,'$')
    char ch_2[1000];
    cin.getline(ch_2,1000,'$');
    cout<<ch_2<<endl;
    if(palindrome_coding_blocks(ch_2))
    {
        cout<<"PALINDROME";
    }
    else
    {
        cout<<"NOT_A_PALINDROME";
    }
}