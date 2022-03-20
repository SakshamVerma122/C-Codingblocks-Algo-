#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
struct variable
{
    int a,b;
}A[100];

bool comparator(struct variable v,struct variable w)
{
    int flag=0;
    int max=(log10(v.a)>log10(w.b))?log10(v.a):log10(w.a));
    while((v.b<w.b||v.b>w.b)&&(flag<max))
    {
        v.b[j]=v.a[j]/((pow(10,log10)+flag);
        w.b[j]=w.a[j]/(pow(10,log10)+flag);
        flag++;
    }
    return(v.b>w.b);
}
int main() 
{
    int test_case;
    cin>>test_case;
    for(int i=0;i<test_case;i++)
    {
        int size;
        cin>>size;
        for(int j=0;j<size;j++)
        {
            cin>>A.a[j];
            A.b[j]=A.a[j]/pow(10,log10(A.a[j]));
        }
        sort(A,A+size,comparator)
    }
}
