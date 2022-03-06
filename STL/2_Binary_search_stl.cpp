#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    // find function is slightly inefficient than binary_search(O(log(n)))
    int arr[]={20,30,40,40,40,50,100,1100};
    int n=sizeof(arr)/sizeof(int);
    

    int key;
    cin>>key;

    //Search in a sorted array
    bool present = binary_search(arr,arr+n,key);
    if(present)
    {
        cout<<"present"<<endl;
    }
    else
    {
        cout<<"absent"<<endl;
    }

    //To get the index 
    // lower_bound(s,e,key) and upper_bound(s,e,key)
    // the above function returns address

    auto it= lower_bound(arr,arr+n,40);
    //Lower_bound returns address of the first bucket that's >= the key
    if(*it > 40)
    {
        cout<<"element not present"<<endl;
    }
    else
    {
        cout<<"LOWER BOUND of 40 is: "<<it-arr<<endl;
    }   


    //upper_bound(arr,arr+n,40);///It will give address of the element that is strictly > key

    auto it_2 = upper_bound(arr,arr+n,40);
    if(*(it_2-1)!=40)
    {
        cout<<"element not present"<<endl;
    }
    else
    {
        cout<<"UPPER BOUND of 40 is: "<<it_2-arr<<endl;
    }

    if(it_2-it>0)
    {
        cout<<"The given number has occured :"<<it_2-it<<" number of times";
    }
    return 0;
}