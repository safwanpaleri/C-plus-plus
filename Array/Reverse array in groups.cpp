//Not Completed
#include <bits/stdc++.h>
using namespace std;
main()
{
	int n=5,k=3,arr[]={1,2,3,4,5},temp;
	for(int i=0;i<n-k;i++)
	{
		swap(arr[i],arr[k+i]);
	}
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}
