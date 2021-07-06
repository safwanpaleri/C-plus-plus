//Check the Number is sparse or not
//sparse number: if no two or more consecutive bits are set in the binary representation.
#include<bits/stdc++.h>
using namespace std;
main()
{
	//initializations
	int n=0;
	//taking input from user
	cout<<"enter n:";
	cin>>n;
	
	//a number is sparse if its AND value with a single right shifted value is zero
	//If you do that the whole bits will be converted into zero if its sparse
	
	//so we do the calculation and store it in a variable;
	int a=n&(n>>1);
	
	//checking whether the variable is zero or not
	//if zero the number is sparse, else not
	if(a == 0)
		cout<<"true"<<endl;
	else
		cout<<"False"<<endl;
}
