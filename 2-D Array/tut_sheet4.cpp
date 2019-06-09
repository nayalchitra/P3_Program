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
			
	int maxsum=0,sum=0,index;
	for(j=0;j<n;j++)
	{
		sum=0;
		for(i=0;i<m;i++)
		{
			sum+=a[i][j];
		}
		if(maxsum<sum)
		{
			maxsum=sum;
			index=j;
		}
	}
	cout<<(index+1);
}
