//Finding the max and second max of an array

#include <bits/stdc++.h>
using namespace std;
main()
{
	//initialization
	int n = 5;
	int arr[]={1,2,3,4,5};
	
	//initialized max and second max as 0.
	int max=0,smax=0;
	
	//tackiling a corner case.
	if(n<2)
		cout<<"Invalid as there won't be a second max";
	
	//traversing through the array searching for max and second max
	for(int i=0;i<n;i++)
	{
		if(max<arr[i])
		{
			//if a max found, saving the old max into second max
			// and the changing  max into current max;
			smax=max;
			max=arr[i];
		}
		//tackling the situation of the second max is in between max and second max
		if(smax<arr[i] && max!=arr[i])
			smax=arr[i];
	}
	//printing the result to the screen
	cout<<max<<" "<<smax;
}
