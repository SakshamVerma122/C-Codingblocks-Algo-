#include<iostream>
using namespace std;
int flag=-1
void factorial(int limit)
{
    if(limit==0||limit==1)
    {
        cout<<1;
    }
    if(limit==2)
    {
        cout<<2
    }
    else
    {
        int arr[2000]={1};
        for(int i=2;i<limit;i++)
        {
            int modulo=0;
            int flag1;
            if(i==2)
            flag1=0;
            else
            flag1=flag;
            for(int j=0;j<=flag1||modulo!=0;j++)
            {
                int k=arr[j];
                arr[j]=((arr[j]*i)+modulo)%10;
                if((modulo=((arr[j]*i)+modulo)/10)>0)
                flag++;
            }
        }
    }
}
int main()
{

}