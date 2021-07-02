#include <bits/stdc++.h>
using namespace std;
main()
{

		int a[]={2,3,4,8};
		int n=4;
		
		//mean
		int sum=0;
		for(int i=0;i<n;i++)
		{
			sum +=a[i];
		}
		cout<<"mean:"<<sum/n<<endl;
		//median
		if(n%2 == 0)
		{
			int d = n/2;
			int c = (a[d]+a[d-1]);
			cout<<a[d-1]<<" "<<a[d]<<endl;
			cout<<"median:"<<c/2<<endl;
		}
		else
			cout<<"median:"<<a[((n+1)/2)-1]<<endl;
}
