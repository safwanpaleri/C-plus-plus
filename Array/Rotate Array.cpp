//Rotate the array in anti clockwise direction for 'd' times.

#include<bits/stdc++.h>
using namespace std;
main()
{
	//Initialization
	//NOTE:every element can be taken from the user directly
	int n=10,d=3,arr[]={2,4,6,8,10,12,14,16,18,20};
	
	//I used a vector array to store the result vector
	//But can be done in same array using other method
	vector<int> ans;
	
	//saving the array to the vector from d to n into the vector
	for(int i=d;i<n;i++)
		ans.push_back(arr[i]);
	
	//saving the rotated elements accordingly to the vector
	for(int k=0;k<d;k++)
		ans.push_back(arr[k]);
	
	//printing the result to the screen
	for(int j=0;j<n;j++)
		cout<<ans[j]<<" ";
	
	
}
