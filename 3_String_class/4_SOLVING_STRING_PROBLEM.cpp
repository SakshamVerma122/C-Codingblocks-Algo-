#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
bool comparator(char a[50],char b[50],int key,int numeric)
{
	char *ch_1,*ch_2;
	ch_1=strtok(a," ");
	ch_2=strtok(b," ");
	if(key>1)
	{
		for(int i=2;i<key;i++)
		{
			ch_1=strtok(NULL," ");
			ch_2=strtok(NULL," ");
		}
	}
	int a_key=0,b_key=0;
	int len_a=strlen(ch_1)-1,len_b=strlen(ch_2)-1;
	if(numeric==1)
	{
		for(int i=len_a;i>=0;i++)
		{
			a_key+=(int(ch_1[i])-48)*pow(10,i);
		}
        for(int i=len_a;i>=0;i++)
		{
			b_key+=(int(ch_2[i])-48)*pow(10,i);
		}
        return(a_key<b_key);
	}
	else
	{
		if(strcmp(ch_1,ch_2)>0)
		{
			return(false);
		}
		else
		{
			return(true);
		}
		
	}
}
int main()
{
	int n;
	cin>>n;
    cin.get();
	char s[100000][50];
	int i;
	for(i=0;i<n;i++)
    {
        cin.getline(s[i],50);
    }
	cin.getline(s[i],50);
	char *ptr = strtok(s[i]," ");
	int key=int(ptr[0])-48;
	ptr=strtok(NULL," ");
	bool reversed;
	if(strcmp(ptr,"false")==0)
	{
		reversed=false;
	}
	else
	reversed=true;
	ptr=strtok(NULL," ");
	int numeric=0;
	if(strcmp(ptr,"numeric")==0)
	{
		numeric=1;
	}
	else
	numeric=0;
	sort(s,s+n,comparator);
}