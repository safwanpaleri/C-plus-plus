#include<bits/stdc++.h>
using namespace std;
main()
{
	int n=4;
	int a[4]={4,8,12,16};
	vector<int> res;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n-i;j++)
		{
			res.push_back(a[i]&a[j]);
		}
	}
	cout<<*max_element(res.begin(),res.end());
}
