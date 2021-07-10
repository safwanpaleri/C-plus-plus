//Adding Two Matrix if
//the number of row and columns of both matrix should match
#include<bits/stdc++.h>
using namespace std;
void usingVecotr(vector< vector<int> > &a, vector< vector<int> > &b)
{
	int nar = a.size();
	int nac = a[0].size();
	int nbr = b.size();
	int nbc = b[0].size();
	vector< vector<int> > res;
	vector<int> resr;
	if(nar == nbr && nac == nbc)
	{
		for(int i=0;i<nar;i++)
		{
			resr.clear();
			for(int j=0;j<nac;j++)
				resr.push_back(a[i][j] + b[i][j]);
			res.push_back(resr);
		}
	}
	for(int k=0;k<nar;k++)
	{
		for(int l=0;l<nac;l++)
			cout<<res[k][l]<<" ";
		cout<<endl;
	}
			
}
main()
{
	int a[3][3] = { {11,12,13}, {24,25,26} , {37,38,39} };
	int b[3][3] = { {90,91,92}, {83,84,85} , {76,77,78} };
	int c[3][3];
	int n=3;
	
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			c[i][j] = a[i][j] + b[i][j];
			
	for(int k=0;k<n;k++)
	{
		for(int l=0;l<n;l++)	
			cout<<c[k][l]<<" ";
		cout<<endl;
	}
	
	cout<<endl<<endl;		
    vector< vector<int> > va;
	vector<int> var;    
    for(int x=0;x<n;x++)
    {
    	var.clear();
    	for(int y=0;y<n;y++)
    		var.push_back(a[x][y]);
    	va.push_back(var);
	}
	vector<vector<int> > vb;
	vector<int> vbr;    
	for(int d=0;d<n;d++)
    {
    	vbr.clear();
    	for(int f=0;f<n;f++)
    		vbr.push_back(b[d][f]);
    	vb.push_back(vbr);
	}
	usingVecotr(va,vb);
}
