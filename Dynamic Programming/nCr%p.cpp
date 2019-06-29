// nCr % p

#include<iostream>
#define p 100000001
using namespace std;

int main()
{
	int n,r;
	cin>>n>>r;
	long long c[n+1][r+1];
	int i,j;
	for(i=0;i<=n;i++)
		c[i][0]=1;
	for(j=1;j<=r;j++)
		c[0][j]=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=r;j++)
			c[i][j]=((c[i-1][j-1])%p+(c[i-1][j])%p)%p;
	}
	cout<<c[n][r];
}
