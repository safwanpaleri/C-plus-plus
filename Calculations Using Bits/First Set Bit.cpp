//find the rightmost set bit occurence
#include<bits/stdc++.h>
using namespace std;
main()
{
	//initialization
	int n=0, c=0;
	
	//Taking inputs from user
	cout<<"enter n:";
	cin>>n;
	
	//continue the loop while n>0;
	while(n)
	{
		//the number isn't zero so we increament the position by 1
		c++;
		
		//the right most bit is taken seperatly to check,
		//whether that bit is set or not
		int s = n&1;
		
		//if set, print the position of the set bit
		// and break from the loop
		if(s==1)
		{
			cout<<c<<endl;
			break;
		}
		
		// if not then the number is right shifted by 1;
		n=n>>1;
	}
}
