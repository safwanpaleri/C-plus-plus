//Insert an user-input element in a user given index in a given array;
#include <bits/stdc++.h>
using namespace std;
main()
{
	while(true)
	{	//initialising 
		int b[]={1,2,3,4,5,0},a,in;
		
		//taking inputs from user
		cout<<"enter no:";
		cin>>a;
		cout<<"enter index";
		cin>>in;
		
		//traversing through array and adding the element
		// in the given index.
		for(int i=6;i>=in;i--)
			if(i==in)
				b[i]=a;
			else
				b[i]=b[i-1];
		
		//printing the array on the screen
		for(int j=0;j<6;j++)
			cout<<b[j]<<" ";
		cout<<endl;
	}
}
