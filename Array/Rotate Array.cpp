#include<bits/stdc++.h>
using namespace std;
main()
{
	int n=10,d=3,arr[]={2,4,6,8,10,12,14,16,18,20};
	vector<int> ans;
	for(int i=0;i<n;i++)
		ans.push_back(arr[i]);
	for(int k=0;k<d;k++)
		ans.push_back(arr[k]);
	for(int j=d;j<n+d;j++)
		cout<<ans[j]<<" ";
	
	
}
