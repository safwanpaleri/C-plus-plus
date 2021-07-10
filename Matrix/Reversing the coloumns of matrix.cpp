//Reversing coloumns of matrix
#include<bits/stdc++.h>
using namespace std;
void usingVector(vector< vector<int> > &matrix)
{
	int n=matrix.size(), m=matrix[0].size();
	int a[n][m];
	for(int i=0;i<n;i++)
	    for(int j=0;j<m;j++)
	        a[i][j]=matrix[i][j];
	        
	for(int i=0;i<n;i++)
	    for(int j=0;j<m/2;j++)
	        swap(a[i][j], a[i][m-1-j]);
	            
	matrix.clear();
	vector<int> temp;
	for(int i=0;i<n;i++)
	{
	    temp.clear();
	    for(int j=0;j<m;j++)
	        temp.push_back(a[i][j]);
	    matrix.push_back(temp);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cout<<matrix[i][j]<<" ";
		cout<<endl;
	}
	
}
main()
{
	int n=2,m=3;
	int mat[n][m] = { {5,11,30},{5,19,19} };
					  
					  
	vector<int> mv;
	vector< vector<int> > matrix;
	for(int i=0;i<n;i++)
	{
		mv.clear();
		for(int j=0;j<m;j++)
			mv.push_back(mat[i][j]);
		matrix.push_back(mv);
	}
    
    //usingVector(matrix);
    
    for(int i=0;i<n;i++)
		for(int j=0;j<m/2;j++)
			swap(mat[i][j],mat[i][m-1-j]);

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cout<<mat[i][j]<<" ";
		cout<<endl;
	}
	
}
