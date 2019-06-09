#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j;
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||i==n)
			{
				cout<<j;
			}
			else
			{
				if(j==n-i+1)
					cout<<(j);
				else
					cout<<" ";
			}
		}
		cout<<endl;
	}
}
