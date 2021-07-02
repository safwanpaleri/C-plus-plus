#include <bits/stdc++.h>
using namespace std;
main()
{
	while(true)
	{
		int b[]={1,2,3,4,5,0};
		int a,in;
		cout<<"enter no:";
		cin>>a;
		cout<<"enter index";
		cin>>in;
		for(int i=6;i>=in;i--)
			if(i==in)
				b[i]=a;
			else
				b[i]=b[i-1];
		for(int j=0;j<6;j++)
			cout<<b[j]<<" ";
		cout<<endl;
	}
}
