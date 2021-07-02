//print all the leaders of the array
//An element is leader if it is greater than all the elements to its right side

#include <bits/stdc++.h>
using namespace std;
main()
{
	//initialization
	int n=7;
	int arr[]={15,16,3,2,4,1,0};
	int max = arr[n-1];
	
	//traversing from rear of the array and checking
	//if the current element is greater than max element
	//if yes print the element and change max
	for(int i=n-1;i>0;i--)
	{
		if(max<arr[i])
		{
			cout<<arr[i]<<" ";
			max=arr[i];
		}
	}
}
