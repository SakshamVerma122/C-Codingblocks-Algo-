#include<bits/stdc++.h>
using namespace std;

void updateBit(int &n,int i,int v)
{
    int mask = ~(1 << i);
    int cleared_n = n & mask;
    n = cleared_n | (v<<i);
}
int main()
{
    int n=5;
    int i;
    cin>>i;
    
    updateBit(n,2,0);

    cout<<n<<endl;
    
    // till here n = 1
    updateBit(n,3,1);
    cout<<n<<endl;

}