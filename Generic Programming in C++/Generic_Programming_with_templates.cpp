// All the containers and algorithms provided by C++ stl are generic{work with diff data types}

//Idea behind->
//idea is to pass data type as a parameter so that we don’t need to write 
//the same code for different data types
//The idea is simple, source code contains only function/class, but compiled code may contain multiple copies of same function/class.

// C++ adds two new keywords to support templates: 
//‘template’ and ‘typename’. 
//The second keyword can always be replaced by keyword ‘class’.

//Templates are expanded at compiler time. This is like macros. The difference is, the compiler does type checking before template expansion. 

//pic1->https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2014/06/templates-cpp.jpg
#include<iostream>
using namespace std;
template<typename T>
int search(T arr[],int n,T key)
{
    for(int posn=0;posn<n;posn++)
    {
        if(arr[posn]==key)
        return(posn);
    }
        return n;
}
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    char ch[]="Saksham";
    int n=sizeof(a)/sizeof(int);
    cout<<search(a,n,6)<<endl;
    n=sizeof(ch)/sizeof(char);
    cout<<search(ch,n,'\0');

    //search(book,n,'\0');
    
    return 0;
}