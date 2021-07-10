//Boundary Traversal of Matrix
//print all the boundary elements of the given matrix.
#include<bits/stdc++.h>
using namespace std;

main()
{
	//initializations
	int n=5,m=4;
	int mat[5][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20} };
	
        //traversing through the matrix row by row              
	for(int i=0;i<n;i++)
	{
		//checking whether the current row is the frist one or the last one.
		if(i==0 || i==n-1)
		{
			//if it is either of one, then print all the elements.
			for(int j=0;j<m;j++)
				cout<<mat[i][j]<<" ";
			cout<<endl;
		}
		//if row is not first or the last.
		else
		{
			//then print the elements present in the first and the last coloumn.
			
			//traversing through the coloumns.
			for(int j=0;j<n;j++)
			{
				//checking whether the coloumn is first or last one.
				//if yes print the element at that coloumn.
				if(j==0||j==m-1)
					cout<<mat[i][j]<<" ";
				//else leave a space, just for looking good.
				else
					cout<<"  ";
			}
			cout<<endl;
		}
	}
}
