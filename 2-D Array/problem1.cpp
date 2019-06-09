#include<iostream>
using namespace std;

int  main()
{
	int m,n,i,j;
	cin>>m>>n;
	int a[m][n];
	int b[m*n];
	int k=0;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
			
			
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			b[k]=a[i][j];
			k++;
		}
	}
	cout<<endl;
	for(i=0;i<m*n;i++)
		cout<<b[i]<<" ";
}
