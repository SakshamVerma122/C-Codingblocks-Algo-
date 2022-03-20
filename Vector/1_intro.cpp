//https://www.cplusplus.com/reference/vector/vector/
#include<iostream>
#include<vector>

//Vectors are same as dynamic arrays with the ability to resize itself 
//automatically when an element is inserted or deleted, with their storage 
//being handled automatically by the container.

//It's size's limit is determined by how much memory you have on your system/server

//Memory is linear

//Not woried about how much memory to be allocated it's handeled by vector class

/*

In vectors, data is inserted at the end. Inserting at the end takes differential time, as sometimes 
there may be a need of extending the array. Removing the last element takes only constant time because 
no resizing happens. Inserting and erasing at the beginning or in the middle is linear in time.

*/


using namespace std;
int main()
{

    // defining type-->1
    // vector<datatype> v
    vector<int> a;
    
    // defining type-->2
    //five int with value 10 
    vector<int> b(5,10);

    int n;
    cout<<"Eneter the no of elements you want: ";
    cin>>n;
    
    // defining type-->3
    //n int elements with value 0 
    vector<int> c(n,0);

    // defining type-->4/copying
    vector<int> d(b.begin(),b.end());

    // defining type-->5
    vector<int> e{1,2,3,4,5,6};
   
   //Itterate method->1
   cout<<"Elements of d are:"<<endl;

   for(int i=0;i<d.size();i++)
   {
       cout<<d[i]<<" ";
   }
   cout<<endl;
   
   cout<<"Elements of e are:"<<endl;
   
   //Itterate method->2
   for(auto i=e.begin();i!=e.end();i++)
    {
        cout<<*i<<",";
        //cout<<"Address: "<<i<<endl;--->Can't do this
    }
    
    //In the above scenario 'i' is like a pointer that will itterate over different position in a dynamic array
    //Itterator is defined inside the vector class
    // class vector
    // {
    //     class iterator
    //     {

    //     }
    // }
    
    // i = vector<int>::iterator
    
    cout<<endl;

    cout<<"Elements of c are:"<<endl;
    //Itterate method->3
    for(int x:c)
    {
        cout<<x<<",";
    }

    cout<<endl;
    
    vector<int> v;
 
    for(int i=0;i<n;i++)
    { 
        int number;
        cin>>number;
        v.push_back(number);//Adds an element to the end of the  vector and expands the memory via 2 if needed while v[] will give error if limits excede
        /* As this is a linear element this means all the time memory will not be available for it's expansion 
        in continuity hence it just finds a place twice the size of the memory occupied and copy the data inside it which it already posesses 
        and then continue storing further elements....*/
        //Doubling of memory is an expensive operation
    }

    for(int x:v)
    {
        cout<<x<<",";
    }
    cout<<endl;

    // v and d are 2 vectors but one taking value via v.push_back(no) and other is just assigned
    
    cout<<v.size()<<endl;//no of elements vector contains
    
    cout<<v.capacity()<<endl;//size of underlying array
    /*It is because u push second element the size changes to 2 when u push 3 element it becomes 4 when u push 5 element it becomes 8-->basically
     doubles the size when completely fills the previously allocated memory*/
    
    cout<<v.max_size()<<endl;//how much vector can expand in the worst case based on memory available in the ram
    
    cout<<d.size()<<endl;//no of elements vector contains
    
    cout<<d.capacity()<<endl;//size of underlying array
    
    cout<<d.max_size()<<endl;//how much vector can expand in the worst case based on memory available in the ram
    return 0;    
}