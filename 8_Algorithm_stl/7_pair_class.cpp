#include<iostream>
#include<vector>
using namespace std;
int main()
{
    pair<int,char> p;

    // first way
    p.first = 10;
    p.second = 'B';

    // second way-->initialising using already existing pair
    pair<int,char> p2(p);

    cout<<p2.first<<endl;
    cout<<p2.second<<endl;
    //Third way-->Using make pair
    pair<int,string> p3 = make_pair(100,"Audi");
    cout<<p3.first<<" "<<p3.second<<" ";

    int a,b;
    pair<int,int> p4 = make_pair(a,b);
    
    //Array of Pairs
    //vextor of Pairs

    pair<pair<int,int>,string> car;
    car.second="Audi";
    car.first.first = 10;
    car.first.second = 20;
    
    
    return 0;
}