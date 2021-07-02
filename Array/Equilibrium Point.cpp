#include <bits/stdc++.h>
using namespace std;
main()
{
	int n=5;
	int a[]={1,3,5,2,2};
	int lsum=0,sum=0,count=0;
	for(int i =0;i<n;i++)
		sum+=a[i];
	for(int j=0;j<n;j++)
	{
		sum=sum-a[j];
		if(lsum==sum)
			count=j+1;
		else
			lsum += a[j];
	}
	cout<<count;
}

