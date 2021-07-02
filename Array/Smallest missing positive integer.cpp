//Find the smallest missing positive integer from the array

#include <bits/stdc++.h>
using namespace std;
int FindSmallest(vector<int> temp,int max)
{
	//we initailize a result variable with max+1 because
	//if the array don't have any missing positive number in between them
	//logically the number next to max is missing.
	int res = max+1;
	//we will transverse through the temp we created from 1 as the smallest positive number
	//to max number we found in array
	for(int j=1;j< max;j++)
	{
		//we will compare the j with (j-1)th term of temp
		//because we have already sorted and only postive numbers
		//are present in the temp array or vector
		// We will return the answer after finding the first occurence
		//because that will be the smallest one
		if(j!=temp[j-1])
			return j;
			
	}
}

main()
{
	//initializations
	int n=5;
	int arr[]={0,-10,1,3,-20};
	
	//creating a vector for easiness, can use a array
	vector<int> temp;
	
	//sort the array in increasing order
	sort(arr,arr+n);
	
	//save all the positive integer to the temp we created
	for(int i=0;i<n;i++)
		if(arr[i]>0)
			temp.push_back(arr[i]);
	
	//find the maximum element in the temp variable 
	int max = *max_element(temp.begin(),temp.end());
	
	//Do the function and print to the screen directly
	cout<<FindSmallest(temp,max);
}
