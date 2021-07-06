#include<bits/stdc++.h>
using namespace std;
main()
{
	int n=0;
	while(true)
	{
		cout<<"enter n:";
		cin>>n;
		if(n&(n-1))
			cout<<"false"<<endl;
		else
			cout<<"true"<<endl;
	}
}
