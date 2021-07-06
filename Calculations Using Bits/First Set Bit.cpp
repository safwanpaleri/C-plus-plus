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
		int c=0;
	
		while(m || n)
		{
			//cout<<"m:"<<m<<" n:"<<n<<endl;
			c++;
			if(m==n)
			{
				cout<<"same number"<<endl;
				break;		
			}
			int s = n&1,z=m&1;
			if(s!=z)
			{
				cout<<c<<endl;
				break;
			}
			n=n>>1;
			m=m>>1;
		}
		
	}
}
