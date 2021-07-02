//Find which one of the given element is majority element
//the element that appears more times than the other element has majority in an array

#include <bits/stdc++.h>
using namespace std;
main()
{
	//initializations
	int n = 8;
	int arr[]={5,22,29,12,32,69,1,75};
	int x=29,y=96;
	
	//two elements are given to check, so 2 count variables
	int countx=0,county=0;
	
	//transverse through array and take the count of both elements
	for(int i=0;i<n;i++)
		if(arr[i]==x)
			countx++;
		else if(arr[i]==y)
			county++;
	
	//if both the given element is not present in given array
	if(countx ==0 && county==0)
		cout<<"The given terms are not present in array"<<endl;
	
	else
	{
		//if both elements have same count
		//then print the biggest element of those two
		if(countx==county)
		{
			if(x>y)
				cout<<y;
			else
				cout<<x;
		}
		else if(countx>county)
			cout<<x;
		else
			cout<<y;
	}
}
