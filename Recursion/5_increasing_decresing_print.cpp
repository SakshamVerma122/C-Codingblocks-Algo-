#include<iostream>
using namespace std;
int increasing(int n)
{
    if(n ==0)
    return 0;

    increasing(n-1);
    cout<<n<<endl;

}
int decreasing(int n)
{
    if(n == 0)
    return 0;

    cout<<n<<endl;
    decreasing(n-1);
    
    // just to empty the stack else the programme is finshed till the above line
    return n;
}
int main()
{
    increasing(5);
    decreasing(6);
    return 0;
}