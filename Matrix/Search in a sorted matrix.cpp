//Search in a sorted matrix.
#include<bits/stdc++.h>
using namespace std;

// this problem canbe solved by 2 ways. so i have done one in vector and other one in using array.
void usingVector(vector< vector<int> > &matrix, int x)
{
	//initializations.
	int n=matrix.size(), m=matrix[0].size();
	bool isFound = false;
	
	//traversing through whole matrix by comparing with the search element.
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
	    	{
			//comparing each element with the search element.
			if(matrix[i][j]==x)
	    		{
				//if found printing the row and coloumn at which the element is present
	    			isFound = true;
	    			cout<<x<<" found at indexes i:"<<i<<" j:"<<j<<endl;
			}
	    	}
	}
	//if the element is not found even after whole traversing through the matrix.
	if(!isFound)
		cout<<"element not present"<<endl;
	        
	 //this method does not utilize the fact that the matrix is sorted.
}
main()
{
	//initialiazations.
	int n=4,m=4;
	int mat[n][m] = { {10, 20, 30, 40},
                          {15, 25, 35, 45},
                          {27, 29, 37, 48},
                          {32, 33, 39, 50} };
	int x = 1;	  

	//we transverse through array from first row, last coloumn element.
	//until the last row, first coloum.
	// you can also start from last row, first coloumn and transverse until first row, last coloumn.
	
	bool isFound = false;
    	int r=0,c=m-1; //r and c are current row and coloumn respectively we currently are
	
    	while(r<n && r>=0 && c<m && c>= 0)
    	{
		//if the element is equal to search element we print its index.
    		if(mat[r][c] == x)
    		{
    			isFound = true;
    			cout<<x<<" found at indexes i:"<<r<<" j:"<<c<<endl;
    			r++;
    			c--;
		}
    		else
    		{
			//if the element is greater than search element, we go to previous coloumn
    			if(mat[r][c]>x)
    				c--;
			//if the element is less than search element then we go to next row.
			else
    				r++;
		}
	}
	//if we didnot find the element even after whole transversing.
	if(!isFound)
		cout<<"element not present";
	
	//converting the array matrix into vector.
	//can skip the process if the given matrix is in vector.
	vector<int> mv;
	vector< vector<int> > matrix;
	for(int i=0;i<n;i++)
	{
		mv.clear();
		for(int j=0;j<m;j++)
			mv.push_back(mat[i][j]);
		matrix.push_back(mv);
	}
    
    	usingVector(matrix, x);
    
	
}
