#include <bits/stdc++.h>
using namespace std;
main()
{
	int n=5,p=5;
	int arr[]={2,3,2,3,5};
	for(int i=1;i<=p;i++)
	{
		int count=0;
		for(int j=0;j<n;j++)
		{
			if(i==arr[j])
			{
				count++;
			}
		}
		cout<<count<<" ";
	}
}
