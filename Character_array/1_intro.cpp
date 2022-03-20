#include<iostream>
using namespace std;
int main()
{
   //Creating 
   char s[10];
   //Creating and initialising
   char a[3]={'a','b','c'};
   cout<<a;// here when we cout array name in case of a character array then the input we will get is all the values inside the character array unless you find a '\0' it will also print garbage value unless you find a null
   //It's important to terminate the char array with '\0'->Ascii value(0)
   char ch[10];

   cin>>s;
   // here what ever we input a null character is added to the end
   /*hello\n
       |
       \/
      INPUT
     hello\0
    The above is also one of the reason why we use cin.get() as to consume '\n' as this is also read as a string by cin.getline() as */
    cout<<s;
    //s="Hello";//You can't do this same reason as C language --->Do search on IQ wale site {char array vs string}
    //as in the above line you are re-assingning
    //In the above line what is done is "Hello"-> a string is made which is stored at certain address and what we are doing above is we are making s point to it which is not possible as it is a char array and array are const type pointer
    char k[]="Hello";
    char k_2[]={'H','e','l','l','o'};
    cout<<"\n Sizeof(k)"<<sizeof(k);//->size=6 because of '\0'
    cout<<"\n Sizeof(k_2)"<<sizeof(k_2);
   return(0); 
}