#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,n,j;
	cin>>n;
	int k=1;
	int sign=-1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2!=0)
			{
				cout<<k;
				k++;
			}
			else
			{
				cout<<k*sign;
				k++;
			}
		}
		cout<<endl;
	}
}
