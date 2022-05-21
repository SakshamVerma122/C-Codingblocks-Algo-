#include<iostream>
#include<cstring>
using namespace std;
void remove_duplicates(char ch[])
{
    int start_dupl=1,end_dupl=1;
    //need onr loop to traverse the duplicated 
    for(int i=0;i<strlen(ch)-1;i++)
    {
        if(ch[i]!=ch[i+1])
        {
            swap(ch[start_dupl],ch[end_dupl]);
            start_dupl++;
        }
        end_dupl++;
    }
}
int main()
{
    char ch[1000];
    cin.getline(ch,1000);

}