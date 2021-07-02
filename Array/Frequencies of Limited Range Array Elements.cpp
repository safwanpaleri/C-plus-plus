//Find occurences of each element in array and print the count.
//All the elements is less than a given constant(p in this initialization)

#include <bits/stdc++.h>
using namespace std;
main()
{
	//initialization
	int n=5,p=5;
	int arr[]={2,3,2,3,5};
	
	//traversing from 1 to p as the elements in the array is less than p.
	for(int i=1;i<=p;i++)
	{
		//initialization of count which also reset in every iteration
		int count=0;
		
		//traversing through array and checking the elements
		for(int j=0;j<n;j++)
		{
			//increasing count if any match found
			if(i==arr[j])
				count++;
		}
		//printing the result to the screen
		cout<<"element "<<i<<"found "<<count<<"times "<<endl;
	}
}
