#include<bits/stdc++.h>
using namespace std;

class car
{
    public:
    string car_name;
    int x_coordinate,y_coordinate;

    car(string car_name,int x_coordinate,int y_coordinate)
    {
        this->car_name = car_name;
        this->x_coordinate = x_coordinate;
        this->y_coordinate = y_coordinate;
    }

    int dist()
    {
        return(x_coordinate*x_coordinate+y_coordinate*y_coordinate);
    }
};

bool compare(car c1,car c2)
{
    int dist1,dist2;
    dist1 = c1.x_coordinate * c1.x_coordinate + c1.y_coordinate * c1.y_coordinate;
    dist2 = c2.x_coordinate * c2.x_coordinate + c2.y_coordinate * c2.y_coordinate;
    
    if(dist1 == dist2)
    {
        bool compare_string;
        if((c1.car_name.compare(c1.car_name)) < 0)
        compare_string = true;
        else
        compare_string = false;
        return(compare_string);
    }
    else
    return(dist1<dist2);
}

int main()
{
    
    int car_num;
    cin>>car_num;

    vector<car> cars;
    cars.reserve(10);

    for(int i=0 ; i<car_num; i++)
    {
        cout<<"Enter x_co-ordinate and y_co-ordinate and car_name respectively";
        int x_coordinate,y_coordinate;
        string car_name;

        cin>>x_coordinate>>y_coordinate>>car_name;

        //cars.push_back({x_coordinate,y_coordinate,car_name});
        
        // cars[i].car(x_coordinate,y_coordinate,car_name);
        // invalid use of 'car::car'

        car temp(car_name,x_coordinate,y_coordinate); //tempurary variable
        // temp.x_coordinate = x_coordinate;
        // temp.y_coordinate = y_coordinate;
        // temp.car_name = car_num;

        cars.push_back(temp);
    }

    sort(cars.begin(),cars.end(),compare);

    cout<<"The nearest car is :"<<cars[0].car_name;
    return 0;
}