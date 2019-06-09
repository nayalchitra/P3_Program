#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j;	
	cin>>n;
	int k=1,p;
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
			k=k+i-1;
		else
			p=k+i-1;
		for(j=1;j<=i;j++)
		{
			if(i%2!=0)
			{
				cout<<k;
				k++;
			}
			else
			{
				cout<<p;
				p--;
			}
		}
		cout<<endl;
	}
}
