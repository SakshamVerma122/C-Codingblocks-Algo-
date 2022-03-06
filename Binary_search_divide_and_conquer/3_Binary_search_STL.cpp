#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	int n = sizeof(arr)/sizeof(int);
	
	//Search in a sorted array

	int key;
	cin>>key;

	bool present = binary_search(arr,arr+n,key)	;

	if(present)
	{
		cout<<"Present";
	}
	else
	{
		cout<<"Absent";
	}

	cout<<endl;

	// get the index of the element
	// lower_bound(s,e,key),upper_bound(s,e,key)

	auto it_u = lower_bound(arr,arr+n,4);//First element >= key
	cout<<"lower bound of 40 is: "<<it_u-arr<<endl;

	auto it_l = lower_bound(arr,arr+n,4);//First element that is greater than key

	cout<<"frequency of element"<<it_l-it_u;

	//element_present or not ---> this can't be used as if element is not present it will give the next larger element
	// if(it_l-arr == n)
	// {
	// 	cout<<"Element not present";
	// }
	// else
	// {
	// 	cout<<"Element is present";
	// }

	int ele_reqd;

	if(arr[it_l-arr] != ele_reqd || arr[it_l-arr-1] != ele_reqd)
	{
		cout<<"Element not present";
	}
}