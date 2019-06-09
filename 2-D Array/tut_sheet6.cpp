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
	for(i=0;i<m;i++)
	{
		int c=0;
		for(j=0;j<n;j++)
		{
			if(a[i][j]==1 )
				c++;
			else
			{
				if(max<c)
				{
					max=c;
					c=0;
				}
			}
		}
		if(max<c)
		{
			max=c;
			c=0;
		}
	}
	cout<<max;
	
}
