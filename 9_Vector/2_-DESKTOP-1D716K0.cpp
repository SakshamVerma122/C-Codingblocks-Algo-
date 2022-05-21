#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Initialise a vector
    vector<int> d{1,2,3,10,14};
     
    d.push_back(16);
    // Time complexity O(1)-->Mostly
    // in case of of memory expansion and no memory available afterwards can take more memory


    d.pop_back();
    //Removes the last element

    // Insert some element in the middle -->O(N)...N = no of elements you have added + no of elements you have shifted
    d.insert(d.begin()+3,100);

    // Insert bunch of similar elements in the middle -->O(N)...N = no of elements you have added + no of elements you have shifted
    d.insert(d.begin()+3,4,400);

    d.erase(d.begin() + 2);

    d.erase(d.begin() + 2,d.begin() + 5);

    cout<<d.size();
    cout<<d.capacity();
    cout<<d.max_size();

    // resize the vector
    // Important -> size will change(increase / decrease)  but capacity never decreases
    d.resize(8);
    
    
    // remove all the elements but doesnt delete the memory occupied
    // Important -> size will change(increase / decrease)  but capacity never decreases
    d.clear();
    
    d.push_back(10);
    d.push_back(11);
    d.push_back(12);
    d.push_back(13);

    //empty
    if(d.empty())
    {
        cout<<"There is no elment left inside the vector";
    }
    else
    {
         cout<<"The size of vector is: "<<d.size();
    }

    for(auto x:d)
    {
        cout<<x;
    }

    // accesses the first element of the vector
    cout<<d.front();
    
    // accesses the last element of the vector
    cout<<d.back();

    // inorder to lessen the use of doubling we use the reserve function
    // It will only double the memory when the limit is reached    
    vector<int> v;
    v.reserve(10);

    for(int i=0;i<=10;i++)
    {
        v.push_back(i);
        cout<<v.capacity()<<endl;
    }
}