//Rotate Matrix by 90 degree
#include<bits/stdc++.h>
using namespace std;
main()
{
	//initializations
	int n=4;
	int mat[n][n] = { {1,2,3,4},
                   	  {5,6,7,8},
                          {9,10,11,12},
                          {13,14,15,16} };
     	
	//the process is exactly same for vectors too.
	
	//we rotate the matrix in 90 by, reversing the transpose of given matrix.
	
	//finding transpose of the given matrix.
    	for(int i=0;i<n;i++)
    		for(int j=i+1;j<n;j++)
    			swap(mat[i][j],mat[j][i]);
    	
	//the reversing the transpose matrix.
    	for (int i = 0; i < n; i++)
        	for (int j = 0, k = n - 1; j < k; j++, k--)
            		swap(mat[j][i], mat[k][i]);
    	
	//printing the matrix after rotated by 90.
    	for(int i=0;i<n;i++)
    	{
    		for(int j=0;j<n;j++)
    			cout<<mat[i][j]<<" ";
    		cout<<endl;
	}
    
}
