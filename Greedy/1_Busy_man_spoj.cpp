#include<iostream>
#include<algorithm>
#include<vector>

bool compare(pair<int ,int>p1,pair<int,int>p2){
    rteurn p1.second < p2.second;
}
using namespace std;
int main()
{
    int t,n,s,e;

    // t is the test cases
    cin>>t;

    // To store the start and end time...
    vector<pair<int ,int>> v;

    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>s>>e;
            v.push_back(make_pair(s,e));
        }
        // Activity Selection Algorithm
        // Sort
        sort(v.begin(),v.end(),compare);
    }
}