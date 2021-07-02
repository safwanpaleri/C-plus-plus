//Find the Equioibrium point of the given array.
//Equilibrium index of an array is an index such that 
//the sum of elements at lower indexes is equal to the sum of elements at higher indexes.

#include <bits/stdc++.h>
using namespace std;
main()
{
	//initialization
	int n=5;
	int a[]={1,3,5,2,2};
	int lsum=0,sum=0,count= -1;
	
	//finding total sum of the array
	for(int i =0;i<n;i++)
		sum+=a[i];
	
	//transversing the array, while checking whether
	//sum from the left is equal to sum from right.
	//when they becomes equal the index is stored in count.
	for(int j=0;j<n;j++)
	{
		sum=sum-a[j];
		if(lsum==sum)
			count=j+1;
		else
			lsum += a[j];
	}
	
	//printing the index to the screen.
	// if there is no equilibrium point -1 will be printed;
	cout<<count;
}

