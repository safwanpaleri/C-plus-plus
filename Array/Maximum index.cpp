//Fnd the maximum j – i such that arr[j] > arr[i]

#include <bits/stdc++.h>
using namespace std;
main()
{
	//initialization
	int a[]= {70, 83, 82, 39, 81};
	//you can find the size of an array using this method
	int n= sizeof(a)/sizeof(a[0]);
	int max=1;
	
	//traversing through array while checking the condition of arr[j] > arr[i]
	//whenever found compare the abs(j-i) value with max and update
	for(int i=0;i<n;i++)
		for(int j=n-1;j>i;j--)
			if(a[i]<=a[j])
				if(max<abs(i-j))
					max=abs(i-j);
	
	//print the max to the user.
	cout<<max;
}
