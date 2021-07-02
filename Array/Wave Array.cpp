#include <bits/stdc++.h>
using namespace std;
main()
{
	int n=6;
	int arr[]={2,4,7,8,9,10};
	for(int i=0;i<n;i+=2)
	{
		swap(arr[i],arr[i+1]);
	}
	for(int j=0;j<n;j++)
		cout<<arr[j]<<" ";
}
