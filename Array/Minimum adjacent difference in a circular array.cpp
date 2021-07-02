#include<bits/stdc++.h>
using namespace std;
main()
{
	int n=26;
	int arr[]={1,21,5,47,71,0,36,22,64,46,18,11,73,13,57,68,8,45,99,78,3,33,17,13,30,26};
	int diff=0;
	int res=abs(arr[0]-arr[1]);
	for(int i=0;i<n;i++)
	{
		if(i==n-1)
			diff=abs(arr[i]-arr[0]);
		else
			diff=abs(arr[i]-arr[i+1]);
		if(diff>0)
			res=min(res,diff);
		cout<<diff<<" ";
	}
	cout<<endl;
	cout<<res;
}
