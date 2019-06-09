#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,n;
	cin>>n;
	int k=0;
	int p=0;
	for(i=1;i<=n;i++)
	{
		p=p+i;
		k=p;
		for(j=1;j<=i;j++)
		{
			cout<<k;
			k--;	
		}
		cout<<endl;
	}
}
