//multiply two matrices
#include<bits/stdc++.h>
using namespace std;
void usingVector(vector< vector<int> > &A, vector< vector<int> > &B)
{
	vector< vector<int> > result;
    vector<int> res;
    if(A[0].size() != B.size())
        cout<<"Not Possible"<<endl;
        
    for (int i = 0; i < A.size(); i++) 
    {
        for (int j = 0; j < B[0].size(); j++) 
        {
            res.clear();
            int mul=0;
            for (int k = 0; k < A[0].size(); k++)
            {
                mul += A[i][k] * B[k][j];
            }
            res.push_back(mul);
            result.push_back(res);
        }
            
    }
    for(int k=0;k<result.size();k++)
	{
		for(int l=0;l<result[0].size();l++)
			cout<<result[k][l]<<" ";
	}
}
main()
{
	int r1=3,c1=2,r2=2,c2=2;
	int v1[r1][c1]={ {4,8},{0,2},{1,6} };	
	int v2[r2][c2]={ {5,2},{9,4} };			
	vector< vector<int> > A;
	vector<int> a;    
    for(int x=0;x<r1;x++)
    {
    	a.clear();
    	for(int y=0;y<c1;y++)
    		a.push_back(v1[x][y]);
    	A.push_back(a);
	}
	vector<vector<int> > B;
	vector<int> b;    
	for(int d=0;d<r2;d++)
    {
    	b.clear();
    	for(int f=0;f<c2;f++)
    		b.push_back(v2[d][f]);
    	B.push_back(b);
	}
	
	for(int d=0;d<r1;d++)
    {
    	for(int f=0;f<c1;f++)
    		cout<<A[d][f]<<" ";
    	cout<<endl;
	}
	cout<<endl;
	for(int d=0;d<r2;d++)
    {
    	for(int f=0;f<c2;f++)
    		cout<<B[d][f]<<" ";
    	cout<<endl;
	}
	cout<<endl;
	usingVector(A, B);
	
}
