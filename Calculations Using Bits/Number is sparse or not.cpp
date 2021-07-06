#include<bits/stdc++.h>
using namespace std;
main()
{
	int n=0;
	while(true)
	{
		cout<<"enter n:";
		cin>>n;
		int a=n&(n>>1);
		cout<<a<<endl;
		if(a == 0)
			cout<<"true"<<endl;
		else
			cout<<"False"<<endl;
	}
}
