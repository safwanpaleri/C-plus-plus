//Insert the user-input element at back of an given array.

#include <bits/stdc++.h>
using namespace std;
main()
{
	//runs the programe for infinite times
	while(true)
	{
		//initialization of array and required items.
		int a[]={1,2,3,4,5},b;
		
		//Taking inputs from user
		cout<<"Enter No to insert:";
		cin>>b;
		
		//increasing the size of the array.
		// adding the element at the rear of the array
		int n = 5;
		a[n+1];
		a[n]=b;
		
		//printing the result array to the screen
		for(int i=0;i<n+1;i++)
			cout<<a[i]<<" ";
	}
}
