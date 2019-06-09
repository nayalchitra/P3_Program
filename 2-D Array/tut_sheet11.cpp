#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int m,n,k;
	cin>>m>>n;
	cin>>k;
	int i,j,l;
	int a[m][n];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
		
	if(k>m)
	{
		
		for(l=0,j=(k-m);l<(m+1-j);l++)
		{
			cout<<a[l][abs(m-k)+l]<<" ";
		}
	}
	else
	{
		for(l=0;l<k;l++)
		{
			cout<<a[abs(m-k)+l][l]<<" ";
		}
	}
	cout<<endl;
	
}
