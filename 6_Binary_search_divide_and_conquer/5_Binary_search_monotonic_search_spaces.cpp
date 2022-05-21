#include<bits/stdc++.h>
using namespace std;

int main()
{
    float sqrt_num;

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

    // float inc = 0.1;
    // float sqrt_numw;
    // for(float ptr = 0; ptr <= 1.0;ptr += inc)
    // {
    //     if((sqrt_num + ptr)*(sqrt_num + ptr)>key)
    //     {
    //         sqrt_numw +=(ptr+sqrt_num);
    //         break;
    //     }
    // }
    // cout<<sqrt_numw - 0.1;

    float inc = 0.1;
    int p;
    cout<<"Precesion: ";
    cin>>p;
    for(int times = 1;times<=p;times++)
    {
    	while(sqrt_num * sqrt_num <= key)
    	{
    		sqrt_num = sqrt_num + inc;
    	}
    	//overshot the value
    	sqrt_num = sqrt_num-inc;
    	inc = inc/10;
    }
    cout<<sqrt_num;
}