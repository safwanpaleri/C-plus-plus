//sum of upper and lower traingle including diagonals
#include<bits/stdc++.h>
using namespace std;
main()
{
	//initializations.
	int n=3;
	int a[n][n] = { {6,5,4}, 
			{1,2,5}, 
			{7,9,7} };
	
	//variables for storing upper triangle sum and lower triangle sum
	int usum=0,lsum=0;
	
	//traversing through upper triangle. and 
	//adding and storing the sum
	for(int i=0;i<n;i++)
		for(int j=i;j<n;j++)
			usum += a[i][j];
	
	//traversing through lower traingle
	//adding and storing the sum
	for(int i=0;i<n;i++)
		for(int j=0;j<=k;j++)
			lsum += a[i][j];
	
	//printing the sum to the screen.
	cout<<"upper sum:"<<usum<<endl;
	cout<<"lower sum:"<<lsum<<endl;
	
}
