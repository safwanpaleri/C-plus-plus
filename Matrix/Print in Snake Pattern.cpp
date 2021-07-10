//print matrice in snake pattern
#include<bits/stdc++.h>
using namespace std;
void usingVector(vector< vector<int> > &A)
{
	for(int i=0;i<A.size();i++)
	{
		if(i%2 ==0)
		{
			for(int j=0;j<A[0].size();j++)
				cout<<A[i][j]<<" ";
		}
		else
		{
			for(int j=A[0].size()-1;j>=0;j--)
				cout<<A[i][j]<<" ";
		}
	}
}
main()
{
	int mat[4][4] = { {10, 20, 30, 40},
                   {15, 25, 35, 45},
                   {27, 29, 37, 48},
                   {32, 33, 39, 50}};
                   
    int n=4;
	cout<<"Using Array"<<endl;      
    for(int i=0;i<n;i++)
    {
    	if(i%2 == 0)
    	{
    		for(int j=0;j<n;j++)
    			cout<<mat[i][j]<<" ";
		}
		else
		{
			for(int j=n-1;j>=0;j--)
				cout<<mat[i][j]<<" ";
		}
	}
    
    cout<<endl;
    cout<<"Using Vector"<<endl;
    vector<int> a;
    vector< vector<int> >A;
    for(int i=0;i<n;i++)
    {
    	a.clear();
    	for(int j=0;j<n;j++)
    		a.push_back(mat[i][j]);
    	A.push_back(a);
	}
	usingVector(A);
	
}
