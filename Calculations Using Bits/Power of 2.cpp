//Check whether the number is power of two or not
#include<bits/stdc++.h>
using namespace std;
main()
{
	//initializations
	int n=0;
	//Taking input from the user
	cout<<"enter n:";
	cin>>n;
	
	//The number is power of two, if the AND value with the preceeding value is zero
	if(n&(n-1) || n==0)
		cout<<"false"<<endl;
	else
		cout<<"true"<<endl;	
}
