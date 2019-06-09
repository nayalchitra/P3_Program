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
			
	int max=0;
	int index=0;
	for(j=0;j<n;j++)
	{
		int c=0;
		for(i=0;i<m;i++)
		{
			if(a[i][j]==1)
				c++;
		}
		if(c>max)
		{
			max=c;
			index=j;
		}
	}
	cout<<(index+1);
}
