#include<iostream>
using namespace std;

int fib(int num)
{
    // Here fib(0) and fib(1) bith should be the base cases as if fib(1) will cont it will lead to fib(0) and fib(-1) and we don't know the value of fib(-1)
    if(num == 0 || num ==1 )
    return num;

    return fib(num-2) + fib(num-1);
}

int fib1(int num)
{
    if(num == 0 || num ==1 )
    return num;

    int subcase1 = fib(num-1);
    int subcase2 = fib(num-1);
    
    int fibseq = subcase1 + subcase2;
    return fibseq;
}
int main()
{
    cout<<fib(5);
    cout<<fib1(3);
}