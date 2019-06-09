#include<iostream>
using namespace std;

int main()
{
	int m,n,i,j;
	cin>>m>>n;
	int a[m][n];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
			
	for(i=0;i<m;i++)
	{
		int max=a[i][0];
		for(j=1;j<n;j++)
			if(a[i][j]>max)
				max=a[i][j];
				
		cout<<max<<" ";
	}
	cout<<endl;
	for(j=0;j<n;j++)
	{
		int max=a[0][j];
		for(i=1;i<m;i++)
			if(a[i][j]>max)
				max=a[i][j];
				
		cout<<max<<" ";
	}
	
}
