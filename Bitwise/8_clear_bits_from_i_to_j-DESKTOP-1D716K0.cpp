#include<bits/stdc++.h>
using namespace std;


void clear_i_bits_coding_blocks(int &num,int position_1,int position_2)
{
    //position_2  farthest from the end and postion_1 closest to the end
    
    int mask = -1;//111111111
    
    //Here indexing from the end starts with 0  ->  2,1,0
    mask = mask << (position_2);//111_ _ _ 
    int mask_2 = ~(1 << (position_1-1));//111_ _ _111
    
    mask = mask | mask_2;
    num = num & mask;

}

int clear_i_j(int &num,int star,int end)
{
    int ones = (~0);
    int a = ones << (end - 1);
    int b = ~(1 << start);
    int mask = a|b;

    int ans = num & mask;
    return ans;
}
int main()
{
    int num,position_1,position_2;
    cin>>num>>position_1>>position_2;

    clear_i_bits_coding_blocks(num,position_1,position_2);

    cout<<num;
}