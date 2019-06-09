#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j;
	cin>>n;
	int f=1;
	int k=1;
	int sign=-1;
	for(i=1;i<=n;i++)
	{
		f=1;
		for(j=1;j<=i;j++)
		{
			if(i%2!=0)
			{
				if(f==1)
				{
					cout<<k;
					k++;
					f=0;
				}
				else
				{
					cout<<k*sign;
					k++;
					f=1;
				}
			}
			else
			{
				if(f==1)
				{
					cout<<k*sign;
					k++;
					f=0;
				}
				else
				{
					cout<<k;
					k++;
					f=1;
				}
			}
		}
		cout<<endl;
	}
}
