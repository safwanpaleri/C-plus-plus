//Exchange of columns
//swap all the first coloumn elements with last coloumn element
#include<bits/stdc++.h>
using namespace std;
main()
{
	//initializations.
	int n=5,m=4;
	int mat[5][4] = { {1,2,3,4},
			  {5,6,7,8},
			  {9,10,11,12},
			  {13,14,15,16},
			  {17,18,19,20} };
	
	//traversing through the matrix            
	for(int i=0;i<n;i++)
	{
		//swapping first coloumn element with the last coloumn element.
		swap(mat[i][0],mat[i][m-1]);
	}
	
	//printing the matrix after exchange.
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cout<<mat[i][j]<<" ";
		cout<<endl;
	}
}
