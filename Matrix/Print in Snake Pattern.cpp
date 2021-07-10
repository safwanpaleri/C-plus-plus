//print matrix in snake pattern
#include<bits/stdc++.h>
using namespace std;
main()
{
	//initializations.
	int n=4;
	int mat[n][n] = { {10, 20, 30, 40},
                   	  {15, 25, 35, 45},
                   	  {27, 29, 37, 48},
                   	  {32, 33, 39, 50}  };
	
	//the process is exactly same for vectors too.
	
	//transverse through the matrix. and print alternative rows in snake pattern
	for(int i=0;i<n;i++)
	{
		//if the current row order is even
		if(i%2 == 0)
	    	{
			//then print elements of row from left to right
			for(int j=0;j<n;j++)
				cout<<mat[i][j]<<" ";
	    	}
		//if the current row order is odd
	    	else
		{
			//then print elements of row from right to left.
			for(int j=n-1;j>=0;j--)
				cout<<mat[i][j]<<" ";
	    	}
    	}
}
