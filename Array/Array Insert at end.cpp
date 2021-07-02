//Insert the user-input element at back of an given array.
#include <bits/stdc++.h>
using namespace std;
main()
{
	while(true)
	{
		int a[]={1,2,3,4,5},b;
		cout<<"Enter No to insert:";
		cin>>b;
		int n = 5;
		a[n+1];
		a[n]=b;
		for(int i=0;i<n+1;i++)
			cout<<a[i]<<" ";
	}
}
