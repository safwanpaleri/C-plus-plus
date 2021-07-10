//Boolean Matrix
#include<bits/stdc++.h>
using namespace std;
void usingVector(vector< vector<int> > &matrix)
{
	int n=matrix.size(), m=matrix[0].size();
	vector<int> is,js;
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
	for(int i=0;i<is.size();i++)
		for(int j=0;j<m;j++)
			matrix[is[i]][j] = 1;

	for(int j=0;j<js.size();j++)
		for(int i=0;i<n;i++)
			matrix[i][js[j]]=1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cout<<matrix[i][j]<<" ";
		cout<<endl;
	}
}
main()
{
	int n=2,m=2;
	int mat[n][m] = { {1,0},
                      {0,0}};	  
				  
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
}
