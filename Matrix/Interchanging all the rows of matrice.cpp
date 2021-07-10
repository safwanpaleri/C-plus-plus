//Interchanging all the rows of a matrix
#include<bits/stdc++.h>
using namespace std;
main()
{
	//initializations
	int n=4,m=4;
	int mat[n][m] = { {3,4,5,0},{2,6,1,2},{2,7,1,2},{2,1,1,2} };
	
	//the process is same for vectors too.
	
	//traversing through the matrix for half of the number of rows.
	//and interchanging all the elements with rows.
    	for(int i=0;i<n/2;i++)
		for(int j=0;j<m;j++)
	    		swap(mat[i][j], mat[n-1-i][j]);
	
	//printing the matix after interchanging.
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cout<<mat[i][j]<<" ";
		cout<<endl;
	}
	
}
