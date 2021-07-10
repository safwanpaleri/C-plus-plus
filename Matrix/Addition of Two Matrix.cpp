//Adding Two Matrix
//The number of row and columns of both matrix should match to do addition in a matrix
#include<bits/stdc++.h>
using namespace std;

//Have 2 solutions, 1. if the given problem is in array, 2. if the given problem is in vector.
void usingVecotr(vector< vector<int> > &a, vector< vector<int> > &b)
{
	//initializations
	int nar = a.size(), nac = a[0].size(), nbr = b.size(), nbc = b[0].size();
	vector< vector<int> > res;
	vector<int> resr;
	
	//we continue if number of rows and columns are equal in both the matrix.
	if(nar == nbr && nac == nbc)
	{
		//we transverse through the arrays and store the added value into a new vector.
		for(int i=0;i<nar;i++)
		{
			//we clear this vector every iteration.
			//this is a temporary vector created for inserting into our vector, as the result vector is vector of vector.
			resr.clear();
			
			//transverse through the inside vectors, and store into the result vector.
			for(int j=0;j<nac;j++)
				resr.push_back(a[i][j] + b[i][j]);
			res.push_back(resr);
		}
		
		//printing the final vector the the screen.
		for(int k=0;k<nar;k++)
		{
			for(int l=0;l<nac;l++)
				cout<<res[k][l]<<" ";
			cout<<endl;
		}
	}
	else
		cout<<"The rows and the coloumns does not match"<<endl;
	
			
}
main()
{
	//initializations
	int a[3][3] = { {11,12,13}, {24,25,26} , {37,38,39} };
	int b[3][3] = { {90,91,92}, {83,84,85} , {76,77,78} };
	int c[3][3];
	int n=3;
	
	//traversing through the arrays and storing the added values into a array.
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			c[i][j] = a[i][j] + b[i][j];
			
	//printing tha values to the screen.
	for(int k=0;k<n;k++)
	{
		for(int l=0;l<n;l++)	
			cout<<c[k][l]<<" ";
		cout<<endl;
	}
	
	cout<<endl<<endl;
	
	//converting the array into vector as the problem is given in array.
	//you can skip this process if the given problem is in vector.
	
	//first vector
   	vector< vector<int> > va;
	vector<int> var;    
    	for(int x=0;x<n;x++)
    	{
		//we clear this vector every iteration.
		//this is a temporary vector created for inserting into our vector, as the vector is vector of vectors.
    		var.clear();
		
		//traversing through the array and storing it into vector one by one.
    		for(int y=0;y<n;y++)
    			var.push_back(a[x][y]);
		
		//after converting one row of matrix as vector. 
		//that vector is added into the final vector.
    		va.push_back(var);
	}
	
	//done the same process for the second array.
	// we can make this into a function, as all the steps are same.
	vector<vector<int> > vb;
	vector<int> vbr;    
	for(int d=0;d<n;d++)
   	 {
    		vbr.clear();
    		for(int f=0;f<n;f++)
    			vbr.push_back(b[d][f]);
    		vb.push_back(vbr);
	}
	
	//finally, calling the function to do the same in the vector.
	usingVecotr(va,vb);
}
