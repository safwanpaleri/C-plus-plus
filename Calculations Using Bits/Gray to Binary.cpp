#include<bits/stdc++.h>
using namespace std;
main()
{
	int n=0;
	while(true)
	{
		cout<<"enter n:";
		cin>>n;
		int bin=0;
		while(n>0)
		{
			n=n>>1;
			bin = bin^n;
		}
		cout<<bin<<endl;
	}
	//for bin to gray n^(n>>1)
}
