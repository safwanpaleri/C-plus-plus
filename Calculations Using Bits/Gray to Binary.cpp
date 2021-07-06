//Converting Gray Code to Binary
#include<bits/stdc++.h>
using namespace std;
main()
{
	//initializations
	int n=0,bin=0;
	
	//taking inputs from user
	cout<<"enter n:";
	cin>>n;
	
	//while the code is still greater than zero.
	while(n>0)
	{
		//the number is right shifted by one 
		n=n>>1;
		//the bin value is xor-ed with the current n and stored.
		bin = bin^n;
		//for bin to gray n^(n>>1)
	}
	//finally, after converting the binary code is printed to the screen.
	cout<<bin<<endl;
	
}
