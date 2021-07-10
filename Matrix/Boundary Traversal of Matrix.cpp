//Boundary Traversal of Matrix
#include<bits/stdc++.h>
using namespace std;

main()
{
	int n=5,m=4;
	int mat[5][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20} };
                      
	for(int i=0;i<n;i++)
	{
		if(i==0 || i==n-1)
		{
			for(int j=0;j<m;j++)
			{
				cout<<mat[i][j]<<" ";
			}
			cout<<endl;
		}
		else
		{
			for(int j=0;j<n;j++)
			{
				if(j==0||j==m-1)
				{
					cout<<mat[i][j]<<" ";
				}
				else
				{
					cout<<"  ";
				}
			}
			cout<<endl;
		}
	}

	cout<<"Using Array"<<endl;  

	{
	      
	//first row
    for(int i=0;i<m;i++)
    	cout<<mat[0][i]<<" ";
    //cout<<endl;
    //last column
    for(int j=1;j<n;j++)
    	cout<<mat[j][m-1]<<" ";
    //cout<<endl;
    //last row
    for(int k=m-2;k>=0;k--)
    	cout<<mat[n-1][k]<<" ";
    //cout<<endl;
    //first colum
    for(int l=n-2;l>=1;l--)
    	cout<<mat[l][0]<<" ";
    //cout<<endl;
    
	}	
}
