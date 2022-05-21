#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> l1,pair<int,int> l2)
{
    int dist_1 , dist_2;
    
    dist_1 = l1.first * l1.first +l1.second * l1.second;
    dist_2 = l2.first * l2.first +l2.second * l2.second;
    
    return(dist_1 < dist_2);
}

int main()
{
    vector<pair<int,int>> location;

    location.reserve(10);

    int no_of_taxis;

    cout<<"Number of taxis:";
    cin>>no_of_taxis;
    
    for (int i = 0; i < no_of_taxis; i++)
    {
        int x_coordinate,y_coordinate;
        cin>>x_coordinate>>y_coordinate;

        location.push_back({x_coordinate,y_coordinate});
        //location.push_back(make_pair(x_coordinate,y_coordinate));
    }

    sort(location.begin(),location.end(),compare);

    cout<<"Choose car at position: ("<<location[0].first<<" , "<<location[0].second<<")";
  
    return 0;
}