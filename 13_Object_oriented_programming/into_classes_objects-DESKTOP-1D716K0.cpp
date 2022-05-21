/*
    * Represent real life data in terms of object-->
    * Example entities -> Car,dog,....
    * Represent entities as object in code
    * object = data members + functions
    * C++ supports OOPs
*/

/*
    * Car Showroom Owner -> Software to sell/update info about Car
    * Car has some info->model no,name,s_price,MRP,....
    * Software needs to maintain info regarding n type of cars-->in procedural programming(use array of certain features Ex->model_no[]={"Maruti_800","Tata_nexon"})
    * the above car be done via creating a class Car ahving various features as variables and then creating an array out of it...
    * Class(Blue print)
    * Class doesn't exist 
    * Tells the compiler when you will create an actual parameter what all parameters object will have
*/

/*
    Class contains 2 type of things
    * data member{Variable/attributes}
    * member function{Function related to the class object}
*/
#include<iostream>
using namespace std;
class Car
{
    //if public: is not written then it's default access modifier is private
    public:
    float Car_price;
    int Car_Model;
    char Car_name;

    int get_dic(float x)
    {
        Car_price-=(x*Car_price)/100;
    }

    void print()
    {
        cout<<"Name"<<Car_name<<" Model_no"<<Car_Model<<" Price"<<Car_price<<endl;
    }

    void start()
    {
        cout<<"Starting CAR BBBBBRRRRRRRR"<<Car_name;
    }
};
//writing the above code doesn't allocate any memory
//Class is just a piece of code that tells the compiler `
int main()
{
    //Creating an object
    Car c;
    cout<<"Size of c"<<sizeof(c)<<endl;
    
    cout<<"Size of c"<<sizeof(Car)<<endl;
    //Car class doesn't occupy any memory it's just saying that when you will declare an object it's size =12

    cin>>c.Car_price>>c.Car_Model>>c.Car_name;
    c.start();

    Car arr[20];//Store info about max 20 cars

    cout<<"\nEnter the dicount....";
    int x;
    cin>>x;

    c.get_dic(x);

    cout<<"After discount....\n";
    c.print();
}