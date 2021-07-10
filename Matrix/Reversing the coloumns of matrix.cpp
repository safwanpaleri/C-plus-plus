//Reversing coloumns of matrix
#include<bits/stdc++.h>
using namespace std;
main()
{
	//initializations.
	int n=2,m=3;
	int mat[n][m] = { {5,11,30},{5,19,19} };
	
	//the process is exactly same for vectors too.
	
	//traverssing through the matrix rows 
		//and then half of the coloumns, and swapped.
    	for(int i=0;i<n;i++)
		for(int j=0;j<m/2;j++)
			swap(mat[i][j],mat[i][m-1-j]);
	
	//printing the matrix after reversing the coloumns.
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cout<<mat[i][j]<<" ";
		cout<<endl;
	}
	
}
