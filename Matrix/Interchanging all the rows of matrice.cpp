//Interchanging all the rows of a matrix
#include<bits/stdc++.h>
using namespace std;
void usingVector(vector< vector<int> > &matrix)
{
	int n=matrix.size(), m=matrix[0].size();
	int a[n][m];
	for(int i=0;i<n;i++)
	    for(int j=0;j<m;j++)
	        a[i][j]=matrix[i][j];
	        
	for(int i=0;i<n/2;i++)
		for(int j=0;j<m;j++)
	    	swap(a[i][j], a[n-1-i][j]);
	            
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
	int n=4,m=4;
	int mat[n][m] = { {3,4,5,0},{2,6,1,2},{2,7,1,2},{2,1,1,2} };
					  
					  
	vector<int> mv;
	vector< vector<int> > matrix;
	for(int i=0;i<n;i++)
	{
		mv.clear();
		for(int j=0;j<m;j++)
			mv.push_back(mat[i][j]);
		matrix.push_back(mv);
	}
    
    usingVector(matrix);
    
    cout<<endl<<endl;
    for(int i=0;i<m;i++)
		swap(mat[0][i],mat[n-1][i]);

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cout<<mat[i][j]<<" ";
		cout<<endl;
	}
	
}
