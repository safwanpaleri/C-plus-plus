//Find the maximum AND value of pairs in the given array
#include<bits/stdc++.h>
using namespace std;
main()
{
	//initializations
	int n=4,m=0;
	int a[4]={4,8,12,16};
	
	//tranversing through all elements and performing AND operations between them
	//and comparing the max and saving to a variable
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n-i;j++)
			m=max(m,a[i]&a[j]);
	
	//finally, printing the value to the screen
	cout<<m<<endl;
}
