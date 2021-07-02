#include <bits/stdc++.h>
using namespace std;
main()
{
	int n = 5;
	int arr[]={1,2,3,4,5};
	int max=0,smax=0;
	for(int i=0;i<n;i++)
	{
		if(max<arr[i])
		{
			smax=max;
			max=arr[i];
		}
		if(smax<arr[i] && max!=arr[i])
			smax=arr[i];
	}
	cout<<max<<" "<<smax;
}
