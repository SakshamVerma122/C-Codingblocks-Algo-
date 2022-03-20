#include<iostream>
using namespace std;
/*     
                cin.get() 
    * Reads a sentence/parahgraph and store it
    * cin.get() reads a single character
    * put a loop to read characters till you get anew line '\n'
*/
void readline(char a[],int maxLen,char delimiter)
{
    int i=0;
    char ch;
    ch = cin.get();
    while(ch!= delimiter)//Important you can't use 
    {
        a[i] = ch;
        i++;
        if(i == (maxLen-1))
        {
            break;
        }
        ch=cin.get();
    }
    a[i]=0;
    return;
    
}
int main()
{
    char a[10];
    cin>>a;
    //the problem with cin>> becuase of which we need to use cin.getline()/{cin.get() using a while loop} is that it breaks at '\n' or 'SPACE'
    cout<<a;
    char d[10];
    readline(d,10,'\n');
    //Important you need to press ENTER if you are using CODING BLOCKS IDE
    char e[19];
    cin.getline(e,19,'$');
    cout<<d;
 //   cout<<c;
}