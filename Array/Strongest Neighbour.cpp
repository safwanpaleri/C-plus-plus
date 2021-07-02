#include <bits/stdc++.h>
using namespace std;
main()
{
	int n=2;
	int arr[]={5,5};
	for(int i=1; i<n; i++)
		cout<<max(arr[i],arr[i-1])<<" ";
}
