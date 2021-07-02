#include <bits/stdc++.h>
using namespace std;
main()
{
	int n=6;
	int arr[]={16,17,4,3,5,2};
	int max = arr[n-1];
	for(int i=n-1;i>0;i--)
	{
		if(max<arr[i])
		{
			cout<<arr[i]<<" ";
			max=arr[i];
		}
	}
}
