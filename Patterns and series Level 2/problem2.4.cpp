#include<iostream>
using namespace std;

int main()
{
	int n,i,j,k;
	cin>>n;
	int m=n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<m;
		}
		m++;
		cout<<endl;
	}
	for(i=n+1;i>=1;i--)
	{
		for(j=1;j<=i;j++)
			cout<<m;
		m--;
		cout<<endl;
	}
}
