//Boolean Matrix
//Given a matrix of 0 and 1. convert all the rows and colums if that column or row contains a 1.
//this matrix is called boolean matrix because 0 is considered as false and 1 is considered as true.
#include<bits/stdc++.h>
using namespace std;

//the solution if the problem is in vector.
//it is exactly the same for the problem is in array too. so only doing in vector.
void usingVector(vector< vector<int> > &matrix)
{
	//initializations
	int n=matrix.size(), m=matrix[0].size();
	vector<int> is,js;
	
	//transversing through the matrix, and 
	//storing the rows and coloumns in two different vectors if it contains a true(1) value.
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
		
			if(matrix[i][j]==1)
			{
				is.push_back(i);
				js.push_back(j);
			}
		}
	}
	
	//we can merge the next 2 loops into one, but i did in two for easy way to understand.
	
	//converting all the values of rows into 1. if it contains true.
	for(int i=0;i<is.size();i++)
		for(int j=0;j<m;j++)
			matrix[is[i]][j] = 1;

	//converting all the values of columns into 1. if any coloumn contains true
	for(int j=0;j<js.size();j++)
		for(int i=0;i<n;i++)
			matrix[i][js[j]] = 1;
	
	//printing the matrix, after converting.
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cout<<matrix[i][j]<<" ";
		cout<<endl;
	}
}
main()
{
	//initializations
	int n=2,m=2;
	int mat[n][m] = { {1,0},
                      	  {0,0} };	  
			
	//converting the given array into vector.
	//can skip if the given problem is in vector.
	
	//initializations
	vector<int> mv;
	vector< vector<int> > matrix;
	for(int i=0;i<n;i++)
	{
		//we clear this vector every iteration.
		//this is a temporary vector created for inserting into our vector, as the result vector is vector of vector.
		mv.clear();
		
		//traversing through the array and storing it into vector one by one.
		for(int j=0;j<m;j++)
			mv.push_back(mat[i][j]);
		
		//after converting one row of matrix as vector. 
		//that vector is added into the final vector.
		matrix.push_back(mv);
	}
	
    	//calling for the function.
    	usingVector(matrix);
}
