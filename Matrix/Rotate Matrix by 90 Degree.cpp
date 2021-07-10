//Rotate Matrix by 90
#include<bits/stdc++.h>
using namespace std;
void usingVector(vector< vector<int> > &A)
{
	int m=A.size(), n=A[0].size();
    int a[m][n];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            a[i][j]=A[i][j];
        
    for(int i=0;i<m;i++)
    	for(int j=i+1;j<n;j++)
    		swap(a[i][j],a[j][i]);
    		    
    for (int i = 0; i < n; i++)
        for (int j = 0, k = n - 1; j < k; j++, k--)
            swap(a[j][i], a[k][i]);
            
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    		cout<<a[i][j]<<" ";
    	cout<<endl;
	}
}
main()
{
	int n=4;
	int mat[4][4] = { {1,2,3,4},
                   	  {5,6,7,8},
                      {9,10,11,12},
                      {13,14,15,16} };
    
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
    
	cout<<endl;               

	
	
	cout<<"Using Array"<<endl;      
    for(int i=0;i<n;i++)
    	for(int j=i+1;j<n;j++)
    		swap(mat[i][j],mat[j][i]);
    		
    for (int i = 0; i < n; i++)
        for (int j = 0, k = n - 1; j < k; j++, k--)
            swap(mat[j][i], mat[k][i]);
    
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    		cout<<mat[i][j]<<" ";
    	cout<<endl;
	}
    
}
