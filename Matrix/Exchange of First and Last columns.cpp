//Exchange of columns
#include<bits/stdc++.h>
using namespace std;
main()
{
	int n=5,m=4;
	int mat[5][4] = { {1,2,3,4},
					  {5,6,7,8},
					  {9,10,11,12},
					  {13,14,15,16},
					  {17,18,19,20} };
					  
	vector<int> mv;
	vector< vector<int> > matrix;
	for(int i=0;i<n;i++)
	{
		mv.clear();
		for(int j=0;j<m;j++)
			mv.push_back(mat[i][j]);
		matrix.push_back(mv);
	}
    
	cout<<"Using Array"<<endl;             
	for(int i=0;i<n;i++)
	{
		swap(mat[i][0],mat[i][m-1]);
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cout<<mat[i][j]<<" ";
		cout<<endl;
	}
	
	cout<<endl<<"using vector"<<endl;
	n=matrix.size(),m=matrix[0].size();
    int a[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            a[i][j]=matrix[i][j];
                
    for(int i=0;i<n;i++)
        swap(a[i][0],a[i][m-1]);
            
    matrix.clear();
        
    vector<int> av;
    for(int i=0;i<n;i++)
    {
        av.clear();
        for(int j=0;j<m;j++)
            av.push_back(a[i][j]);
        matrix.push_back(av);
    }
    
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<m;j++)
    		cout<<matrix[i][j]<<" ";
    	cout<<endl;
	}
}
