#include<iostream>
using namespace std;
class Car
{
    private:
    int price;
    public:
    int model;
    char name[10];
    void setprice(int p)//the main motive of this is to provide restrictions like min price.No other person is allowed to change the min price as private and constrains are applied
    {
        if(p>=1000)
        price=p;
        else
        price=1000;
    }
    int getprice()
    {
        return(price);
    }
    void start()
    {
        cout<<"The car starts"<<name;
    }
};
int main()
{
    Car c;
    cin>>c.model>>c.name;
    cout<<"The model of the car is:"<<c.model<<endl;
    cout<<"The name of the car is:"<<c.name<<endl;
    c.setprice(1500);
    cout<<"The price of the car is:"<<c.getprice()<<endl;
    c.setprice(-1000);
    cout<<"The price of the car is:"<<c.getprice()<<endl;
}