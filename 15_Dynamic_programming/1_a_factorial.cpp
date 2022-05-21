#include<iostream>
using namespace std;

int fib(int n)
{
    // Base case --> present in most of the recursive programmes
    if(n==0 || n==1)
    {
        return n;
    }

    // no need of implementing if(n>=2) because of presence of return statements with 0 and 1 hence things will not go to -ve number ever

    /************* CONCLUSION *************/
    /* Always put return statement with the base condtions */

    int ans = fib(n-1) + fib(n-2);
    return ans;
}
int main()
{
    int n;
    cin>>n;

    cout<<fib(n);
    return 0;
}