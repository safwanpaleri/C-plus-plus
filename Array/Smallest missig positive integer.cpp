#include <bits/stdc++.h>
using namespace std;
main()
{
	int n=5;
	int arr[]={0,-10,1,3,-20};
	vector<int> temp;
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
		if(arr[i]>0)
			temp.push_back(arr[i]);
	int max = *max_element(temp.begin(),temp.end());
	int res = max+1;
	for(int j=1;j< max;j++)
	{
		if(j!=temp[j-1])
		{
			res=j;
			break;
		}
	}
	cout<<res;
}
