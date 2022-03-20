#include<iostream>
using namespace std;

int mult(int a,int b)
{
    // base case
    if(b == 0)
    {
        return 0;
    }
    return a + mult(a,(b-1));
}

int main()
{
    cout<<mult(9,10);
    return 0;
}