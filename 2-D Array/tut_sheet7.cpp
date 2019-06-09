#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int m,n,i,j;
	cin>>m>>n;
	int a[m][n];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
		
	
	
	int min=0;
	int minindex=0;
	int max=0;
	int k=0;
	for(i=n-1;i>=0;i--)
	{
		max += a[0][i]*pow(2,k);
		k++;
	}
	min=max;
	int index=0;
	
	int p=0;
	for(i=1;i<m;i++)
	{
		p=0;k=0;
		for(j=n-1;j>=0;j--)
		{
			p += a[i][j]*pow(2,k);
			k++;
		}
		if(p>max)
		{
			max=p;
			index=i;
		}
		else if(p<min)
		{
			min=p;
			minindex=i;
		}
	}
	cout<<minindex<<endl;
	cout<<index<<endl;
}
