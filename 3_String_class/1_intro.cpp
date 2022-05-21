#include<iostream>
#include<string>
using namespace std;

// String class -> STL
// Alternative for char array
// It's not a data_structure but a container
// It wraps a char array inside a string object

int main()
{
    //Declaration
    string s0;
    
    //Initialisation
    string s1("Hello");
    string s2 = "Hello World";

    //copy constructor
    string s3(s2);

    // Initialisation using Assignment
    string s4 = s3;
    
    // Initialising string using character array
    char a[]={'a','b','c','\0'};
    string s5(a);

    // Printing output
    cout<<s0<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;

    //How to check whether s0 is empty or not
    if(s0.empty())
    {
        cout<<"S0 is empty";
    }
    else
    {
        cout<<"S0 is not empty";
    }
    cout<<endl;

    //Append
    s0.append("I love C++");
    s0+=" and Python";
    cout<<s0<<endl;

    //Remove
    s0.clear();
    
    //length
    cout<<s0.length();

    //comparing lexographically
    s0="Apple";
    s1="Mango";
    cout<<endl<<"Comparison"<<s0.compare(s1);
    // Equal to zero if are equal

    //Operators
    s0<s1;
    if(s1>s0)
    {
        cout<<endl<<"Mango is lexographically greater than apple";
    }
    
    //accessing particular character of a string
    cout<<endl<<s0[0]<<endl;

    string s="I want to have apple juice";
    int idx = s.find("apple");
    cout<<idx<<endl;

    //Remove a word from string
    string word = "apple ";
    int len = word.length();
    s.erase(idx,len);//s.erase(from_idx,howmanyidx);
    cout<<s<<endl;

    //Iterate over all the character of a string
    for(int i=0;i<s1.length();i++)
    {
        cout<<s1[i]<<";";
    }
    cout<<endl;

    //s.begin()-> Points to the first of the string s.end() points to one index after the last character of the string
    //[begin,end)
    for(auto it = s.begin();it!= s.end();it++)
    {
        cout<<(*it)<<endl;
        //it is a pointer
    }
    cout<<"BEGIN"<<*(s.begin())<<endl;
    cout<<"END"<<*((s.end())-1)<<endl;
    /*
        class String
        {
            class iterator
            {
                //this is the data type we are using above / what auto is int the above 
            }
        }
        How to access iterartor outside the string
        string::iterator it == auto it for the above loop
    */

    //For Each Loop
    for(auto c:s1)
    {
        // here auto is equivalent to a character
        cout<<c<<".";
    }
}
