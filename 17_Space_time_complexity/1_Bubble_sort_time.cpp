#include<iostream>
#include<algorithm>
#include<ctime>
using namespace std;
void bubble_sort(int arr[],int size)
{
    for(int itr_1=1;itr_1<size;itr_1++)
    {
        for(int itr_2=0;itr_2<size-itr_1;itr_2++)//{(n+(-n+1))...+n-3+n-2+n-1}=((n-1)((n-1)-1))/2
        {
            if(arr[itr_2]>arr[itr_2+1])
            {
                swap(arr[itr_2],arr[itr_2+1]);
            }
        }
    }
}

bool compare(int a,int b)
{
    return(a>b);
}

int main()
{
    int size,arr[100];
    cin>>size;
    for(int i=0;i<size;i++)
    arr[i]=size-i;
    
    time_t start = clock();//time_t-> datatype of the class.....clock function returns object of this datatype and that basically denotes start time
    
    //clock()
    //returns the approximate processor time that is consumed by the program.
    //In order to compute the processor time, the difference between values returned by two different calls to clock(), one at the start and other at the end of the program is used. To convert the value to seconds, it needs to be divided by a macro CLOCKS_PER_SEC.
    //The clock() time may advance faster or slower than the actual wall clock. It depends on how the operating system allocates the resources for the process.
    
    //bubble sort()
    bubble_sort(arr,size);

    time_t end = clock();
    
    cout<<"Bubble Sort took time:"<<(end-start)/CLOCKS_PER_SEC<<" seconds."<<endl;
    cout<<"Bubble Sort took time:"<<(end-start)/CLOCKS_PER_SEC<<" cpu time units."<<endl;

    sort(arr,arr+size,compare);//reversing the array

    start = clock();
    
    sort(arr,arr+size);// We used this function as the time complexity=O(nlog(n)) which is similar to merge sort

    end = clock();

    cout<<"Merge Sort took time:"<<(end-start)/CLOCKS_PER_SEC<<" seconds."<<endl;
    cout<<"Bubble Sort took time:"<<(end-start)/CLOCKS_PER_SEC<<" cpu time units."<<endl;

    cout<<endl<<"the value of the clock():"<<clock();
}