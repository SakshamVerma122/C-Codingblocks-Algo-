#include<iostream>
using namespace std;
int Binary_search(int *arr,int size,int ele_reqd)
{
    int first_val=0,second_val=size-1;
    int mid,place;
    while(true)
    {
        mid=(first_val+second_val)/2;
        
        // It's important to write if(arr[mid]!=ele_reqd && mid == first_val && mid == second_val) here as the 
        //break condition is when either the first_val point to a place after second_val or second_val point to 
        //a place before first_val and if it's written after all the other conditions then it will be satisfying 
        //either if(arr[mid]>ele_reqd) or if(arr[mid]<ele_reqd) and will continue unless it encounters value = 
        //ele_reqd at some location(garbage location) beyond the array's raech
        if(arr[mid]!=ele_reqd && mid == first_val && mid == second_val)
        {
            place=-1;
            break;
        }
        else if(arr[mid]==ele_reqd)
        {
            place=mid;
            break;
        }
        else if(arr[mid]>ele_reqd)
        {
            second_val=mid-1;
        }
        else if(arr[mid]<ele_reqd)
        {
            first_val=mid+1;
        }
    }
    return place;
}
void Binary_search_1(int *arr,int size,int ele_reqd)
{

     int first_val=0,second_val=size-1;
    int mid,place;
    while(true)
    {
        mid=(first_val+second_val)/2;
        
        // It's important to write if(arr[mid]!=ele_reqd && mid == first_val && mid == second_val) here as the 
        //break condition is when either the first_val point to a place after second_val or second_val point to 
        //a place before first_val and if it's written after all the other conditions then it will be satisfying 
        //either if(arr[mid]>ele_reqd) or if(arr[mid]<ele_reqd) and will continue unless it encounters value = 
        //ele_reqd at some location(garbage location) beyond the array's raech
        if(arr[mid]!=ele_reqd && mid == first_val && mid == second_val)
        {
            place=-1;
            break;
        }
        else if(arr[mid]==ele_reqd)
        {
            place=mid;
            break;
        }
        else if(arr[mid]>ele_reqd)
        {
            second_val=mid-1;
        }
        else if(arr[mid]<ele_reqd)
        {
            first_val=mid+1;
        }
    }
    cout<<"\nThis is Void type Binary_search"<<place;

}
void aise_he(int *arr,int size,int ele_reqd,int (&cmp)(int *arr,int size,int ele_reqd),void (&cmp_1)(int *arr,int size,int ele_reqd))
{
    int jack=cmp(arr,size,ele_reqd);
    //cmp_1(int *arr,int size,int ele_reqd);
    cout<<"This is int type Binary_search"<<jack;
    cmp_1(arr,size,ele_reqd);
    
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8},ele_reqd=3,size=8;
    aise_he(arr,size,ele_reqd,Binary_search,Binary_search_1);
    
}