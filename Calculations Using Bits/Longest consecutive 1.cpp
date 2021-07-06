//Finding the longest consecutive occurence of 1 in a binary array
#include<bits/stdc++.h>
using namespace std;
main()
{
	//initializations
	int n=0,m=0,c=0;
	
	//taking inputs from user
	cout<<"enter n:";
	cin>>n;
	
	//while the number is still greater then zero
	while(n>0)
	{
		//compare the last bit whether is zero or one
		//if one increment the count variable by one
		//else reset count variable into 0
		if(n&1)
			c++;
		else
			c=0;
		
		//update the max value of count if changes
		m=max(m,c);
		
		//right shift the number by one
		n=n>>1;
	}
	//print the maximum value of c occured while running the loop
	cout<<m<<endl;
}
