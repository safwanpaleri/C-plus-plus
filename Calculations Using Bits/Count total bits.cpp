//For the given positive integers 'n' and 'm', find total bits after doing Binary-XOR;
#include<bits/stdc++.h>
using namespace std;
main()
{
	//initializations
	int n=0,m=0,c=0,axb;
	
	//Taking Inputs from User
	cout<<"enter n:";
	cin>>n;
	cout<<"Enter m:";
	cin>>m;
	
	//comparing if the given numbers are same.
	//if same there will not be any bits in common.
	if(m==n)
		cout<<"same number"<<endl;
	else
	{
		//saving the Binary-XOR result into a variable
		axb= n^m;
		
		//continue the work, while the variable isn't zero
		while(axb)
		{	
			//comparison of last bits
			//if last bit is 1 then increase count
			if(axb&1)
				c++;
			//right shift by one so the next bit can be compared
			axb=axb>>1;
		}
		//finally, print the count to the screen
		cout<<"Total Bits:"<<c<<endl;
	}
		
}
