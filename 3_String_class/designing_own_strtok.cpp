#include<iostream>
#include<cstring>
using namespace std;
char* mystrtok(char *str,char delim)//char* mystrtok(char arr[],char delim[])
{
    //string and single char acts as delimiter
    static char* input=NULL;
    if(str != NULL)
    {
        //We are making the first call
        input = str;
    }

    //start extracting token and store them in a array
    char *output = new char[strlen(input)+1];
    int i=0;
    for(;input[i]!='\0';i++)
    {
        if(input[i]!=delim)
        {
            output[i]=input[i];
        }
        else
        {
            output[i]= '\0';
            input = input + i + 1;
            return output;
        }
    }
    
    return token;
}
int main()
{

}