#include<bits/stdc++.h>
using namespace std;

//clear all the last i bit

void clear_i_bits(int &num,int position)
{
    int mask = ~0;//111111111

    //There are 2 ways--> ~0/-1
    
    // if we put position == 0 then it will multiply with 2^0 = 1 hwncw will remain same hence the least amt of position should be 1

    // here we have assumed indexing from the end starts with 1  ->  3,2,1
    mask = mask << position;//111_ _
    num = num & mask;

}

void clear_i_bits_coding_blocks(int &num,int position)
{
    int mask = -1;//111111111
    
    //Here indexing from the end starts with 0  ->  2,1,0
    mask = mask << (position+1);//111_ _ _
    num = num & mask;

}

int main()
{
    int num,position;
    cin>>num>>position;

    clear_i_bits(num,position);

    cout<<num;
}