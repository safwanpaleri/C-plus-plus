#include <bits/stdc++.h>
using namespace std;
main()
{
	int a[]= {70, 83, 82, 39, 81};
	int n= sizeof(a)/sizeof(a[0]);
	int max=1;
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>i;j--)
		{
			if(a[i]<=a[j])
			{
				cout<<abs(i-j)<<" ";
				if(max<abs(i-j))
					max=abs(i-j);
			}
		}
		cout<<endl;
	}
	cout<<max;
}
