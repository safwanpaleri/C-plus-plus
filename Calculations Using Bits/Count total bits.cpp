#include<bits/stdc++.h>
using namespace std;
main()
{
	int n=0,m=0;
	while(true)
	{
		cout<<"enter n:";
		cin>>n;
		cout<<"Enter m:";
		cin>>m;
		int big = max(m,n);
		int c=0,axb;
		if(m==n)
		{
			cout<<"same number"<<endl;
			break;		
		}
		axb= n^m;
		while(axb)
		{			
			if(axb&1)
				c++;
			axb=axb>>1;
		}
		cout<<c<<endl;
		
	}
}
