#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sqrt_num;

    int key ;
    cin>>key;

    int s = 0;
    int e = key,mid;
    
    while(s <= e)
    {
        mid = (s+e)/2;

        if(mid * mid == key)
        {
            sqrt_num = mid;
            break;
        }
        else if( mid * mid > key)
        {
            e = mid-1;
        }
        else
        {
            s = mid + 1;
            sqrt_num = mid;
        }
    }

    float inc = 0.1;
    float answ;
    for(float ptr = 0; ptr <= 1.0;ptr += inc)
    {
        if((sqrt_num + ptr)*(sqrt_num + ptr)>key)
        {
            answ +=(ptr+sqrt_num);
            break;
        }
    }
    cout<<answ - 0.1;
}