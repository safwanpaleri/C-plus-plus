//Transpose of a matrix
#include<bits/stdc++.h>
using namespace std;
main()
{
	//initializations
	int n=3;
	int mat[n][n] = { {1,2,3},
                   	  {4,5,6},
                      	  {7,8,9} };              

    	//traversing through matrix and swapping the numbers.
    	for(int i=0;i<n;i++)
    		for(int j=i+1;j<n;j++)
    			swap(mat[i][j],mat[j][i]);
	
	//printing after transposing.
    	for(int i=0;i<n;i++)
    	{
    		for(int j=0;j<n;j++)
    			cout<<mat[i][j]<<" ";
    		cout<<endl;
	}
    
}
