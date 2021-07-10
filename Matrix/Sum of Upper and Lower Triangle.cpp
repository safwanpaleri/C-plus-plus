//sum of upper and lower traingle including diagobal
#include<bits/stdc++.h>
using namespace std;
void usingVector(vector< vector<int> > &matrix, int n)
{
	int upper_sum=0,lower_sum=0;
    vector<int> sums;
    for(int i=0;i<n;i++)
        for(int j=i;j<n;j++)
            upper_sum = upper_sum + matrix[i][j];
    sums.push_back(upper_sum);
    for(int k=0;k<n;k++)
        for(int l=0; l<=k; l++)
            lower_sum = lower_sum + matrix[k][l];
    sums.push_back(lower_sum);
        
	for(int m=0;m<sums.size();m++)
		cout<<sums[m]<<" ";
	cout<<endl;
}
main()
{
	int a[3][3] = { {6,5,4}, 
					{1,2,5}, 
					{7,9,7} };
	int usum=0,lsum=0;
	int n=3;
	
	for(int i=0;i<n;i++)
		for(int j=i;j<n;j++)
			usum += a[i][j];
	
	for(int k=0;k<n;k++)
		for(int l=0;l<=k;l++)
			lsum += a[k][l];
			
	cout<<"upper sum:"<<usum<<endl;
	cout<<"lower sum:"<<lsum<<endl;
	
	vector< vector<int> > matrix;
	vector<int> var;
	for(int x=0;x<n;x++)
    {
    	var.clear();
    	for(int y=0;y<n;y++)
    		var.push_back(a[x][y]);
    	matrix.push_back(var);
	}
	
	usingVector(matrix, n);
	
}
