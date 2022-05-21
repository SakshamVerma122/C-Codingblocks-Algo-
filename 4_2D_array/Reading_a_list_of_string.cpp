#include<iostream>
using namespace std;
int main()
{
    char ch[100][100];
    int num_str;
    cin>>num_str;
    for(int i=0;i<num_str;i++)
    {
        cin>>ch[i];
    }
    for(int i=0;i<num_str;i++)
    {
        cout<<ch[i]<<"\n";
    }
    cin>>num_str;
    char a[100][100];

    cin.get();//We are using this to consume the extra ENTER after n
    //If you will not consume '\n'/ENTER then ENTER will be treated as one string for cin.getline(a[i],1000)
    for(int i=0;i<num_str;i++)
    {
       cin.getline(a[i],1000);
       // here by default delimiter is '\n'  
    }
    for(int i=0;i<num_str;i++)
    {
        cout<<a[i]<<endl;
    }
    
}