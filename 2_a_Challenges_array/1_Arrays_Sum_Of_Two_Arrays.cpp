#include<iostream>
using namespace std;
int flag=-1;
int* add(int *arr1,int size1,int *arr2,int size2)
{
	int modulo=0,max=(size1>size2)?size1:size2;
	for(int i=0;(i<max||modulo!=0);i++)
	{
		int k=arr1[i];
		arr1[i]=(arr1[i]+arr2[i]+modulo)%10;
		modulo=(k+arr2[i]+modulo)/10;
		flag++;
	}
	return arr1;
}
int main() 
{
	int arr1[1000]={0},arr2[1000]={0};
	int size1,size2;
	cin>>size1;
	for(int i=size1-1;i>=0;i--)
	{
		cin>>arr1[i];
	}
	cin>>size2;
	for(int i=size2-1;i>=0;i--)
	{
		cin>>arr2[i];
	}
	int *p=add(arr1,size1,arr2,size2);
	for(int i=flag;i>=0;i--)
	{
		cout<<p[i]<<" ,";
	}
	cout<<" END";
}