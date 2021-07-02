//To print the given array in wave format
//ie, it should be in format a[0]>=a[1]>=a[2]<=a[3]>=...

#include <bits/stdc++.h>
using namespace std;
main()
{
	//initializations
	int n=6;
	int arr[]={2,4,7,8,9,10};
	
	//if the array is sorted then continue
	//else sort the array
	
	//transverse through the array from 0 to n
	//and swap adjacent elements
	//Here i is incremented by +2 as 2 elements are involved in swapping
	//ie because if number is already swapped, it cannot be swapped again
	for(int i=0;i<n;i+=2)
		swap(arr[i],arr[i+1]);
	
	//printing the array after converting to wave format
	for(int j=0;j<n;j++)
		cout<<arr[j]<<" ";
}
