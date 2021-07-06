#include<bits/stdc++.h>
using namespace std;
main()
{
	int n=0;
	while(true)
	{
		cout<<"enter n:";
		cin>>n;
		int c=0;
		vector<int> arr;
		while(n>0)
		{
			arr.push_back(c);
			if(n&1)
				c++;
			else
				c=0;
			n=n>>1;
		}
		cout<<*max_element(arr.begin(), arr.end())<<endl;
	}
}
