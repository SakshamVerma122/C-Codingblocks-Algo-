#include<iostream>
#include<cstring>
using namespace std;

//http://www.cplusplus.com/reference/cstring/strtok/

// char *strtok(char *s char *delimiters)->Break a string into list of tokens
//returns a character pointer
// return a token n each subsequent call
// on the first call function should be passed with string arguement for 's'
// on subsequent calls we should pass the string arguement as null
int main()
{
    char s[100]="Today is a ra,i,ny d.ay";

    char *ptr = strtok(s," ,.");
    cout<<ptr<<endl;

    /*
    ptr = strtok(s," ,.");
    cout<<ptr<<endl;
    */
    
    //ptr points to the first token which is stored as a character array
    //Basically what strtok() does is that it breaks the string on delimiter and store the first token as a string at some memory space 
    //which is pointed by ptr here {'T','o','d','a','y','\0'} is the the first token pointed by ptr
    
    ptr = strtok(NULL," ,.");//stores till which part it has traversed
    cout<<ptr<<endl;
    
    while(ptr!=NULL)
    {
        ptr = strtok(NULL," ,.");
        cout<<ptr<<endl;
    }
    
    return 0;
}