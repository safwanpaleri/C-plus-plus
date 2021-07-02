//Find the minimum of difference between two adjacent elements in an array

#include<bits/stdc++.h>
using namespace std;
main()
{
	//initialization
	int n=26;
	int arr[]={1,21,5,47,71,0,36,22,64,46,18,11,73,13,57,68,8,45,99,78,3,33,17,13,30,26};
	int diff=0;
	
	//initializing first result to be difference between first and second element
	int res=abs(arr[0]-arr[1]);

	//transversing through array and finding the differences between the two arrays
	for(int i=0;i<n;i++)
	{
		//if we are at the last element, we find the difference between the last and the first 
		//element of that array, 
		//else to the adjacent element
		if(i==n-1)
			diff=abs(arr[i]-arr[0]);
		else
			diff=abs(arr[i]-arr[i+1]);
		
		//comparing current difference and previous minimum and
		//changing the result accordingly
		res=min(res,diff);
	}
	//printing the screen to user
	cout<<res;
}
