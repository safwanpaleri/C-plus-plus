//Search in a sorted matrix
#include<bits/stdc++.h>
using namespace std;
void usingVector(vector< vector<int> > &matrix, int x)
{
	int n=matrix.size(), m=matrix[0].size();
	bool isFound = false;
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<m;j++)
	    {
	    	if(matrix[i][j]==x)
	    	{
	    		isFound = true;
	    		cout<<x<<" found at indexes i:"<<i<<" j:"<<j<<endl;
			}
		}
	}
	if(!isFound)
		cout<<"element not present"<<endl;
	        
	            
	
}
main()
{
	int n=4,m=4;
	int mat[n][m] = { {10, 20, 30, 40},
                      {15, 25, 35, 45},
                      {27, 29, 37, 48},
                      {32, 33, 39, 50}};
	int x = 1;	  
	bool isFound = false;				  
	vector<int> mv;
	vector< vector<int> > matrix;
	for(int i=0;i<n;i++)
	{
		mv.clear();
		for(int j=0;j<m;j++)
			mv.push_back(mat[i][j]);
		matrix.push_back(mv);
	}
    
    //usingVector(matrix, x);
    
    int r=0,c=m-1;
    while(r<n && r>=0 && c<m && c>= 0)
    {
    	if(mat[r][c] == x)
    	{
    		isFound = true;
    		cout<<x<<" found at indexes i:"<<r<<" j:"<<c<<endl;
    		r++;
    		c--;
		}
    	else
    	{
    		if(mat[r][c]>x)
    			c--;
    		else
    			r++;
		}
	}
	if(!isFound)
		cout<<"element not present";
	
}
