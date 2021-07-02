#include <bits/stdc++.h>
using namespace std;
main()
{
	int n = 8;
	int arr[]={5,22,29,12,32,69,1,75};
	int x=29,y=96;
	int countx=0,county=0;
	for(int i=0;i<n;i++)
		if(arr[i]==x)
			countx++;
		else if(arr[i]==y)
			county++;
	if(countx==county)
		if(x>y)
			cout<<y;
		else
			cout<<x;
	else if(countx>county)
		cout<<x;
	else
		cout<<y;
}
