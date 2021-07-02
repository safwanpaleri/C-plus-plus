//Find the Mean and Median of an array
//Mean = total sum of array divided by number of elements in the array.
//median = Middle element of an array if the array is sorted.

#include <bits/stdc++.h>
using namespace std;
main()
{
	//initialization	
	int a[]={2,3,4,8};
	int n=4;
	
	//I am assuming the cases if the given array is sorted.
	//if your array is not sorted, inlcude a sorting function too.
	
	//Finding Mean
	//first find the total sum of the array
	int sum=0;
	for(int i=0;i<n;i++)
		sum +=a[i];
	//Printing the mean to the user directly by dividing the calculated sum with total number of element in array
	cout<<"mean:"<<sum/n<<endl;
	
	//Finding Median
	//Two cases when the number of elements in the given array is odd and even.
	//if even
	if(n%2 == 0)
	{
		//if even there will be two middle numbers and
		//median is average of two middle numbers
		int d = n/2;
		int c = (a[d]+a[d-1]);
		cout<<"median:"<<c/2<<endl;
	}
	//if odd
	//directly calculating the middle number and printing to the screen time
	else
		cout<<"median:"<<a[((n+1)/2)-1]<<endl;
}
