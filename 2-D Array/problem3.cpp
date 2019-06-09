//print kth diagonal

#include<iostream>
using namespace std;

int main()
{
	
	int n,m,i,j;
	cin>>n>>m;
	int a[n][m];
	int k,start_row,start_col;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin>>a[i][j];
	cin>>k;
	if(k<n)
	{
		start_row=k;
		start_col=0;
	}
	else
	{
		start_row=n-1;
		start_col=k-n+1;
	}
	for( ;start_row>=0 && start_col <m;start_row--,start_col++)
		cout<<a[start_row][start_col]<<" ";
	
}
