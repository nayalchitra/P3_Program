#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j;
	cin>>n;
	int f=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(f==0)
			{
				cout<<"0";
				f=1;	
			}	
			else
			{
				cout<<"1";
				f=0;
			}
		}	
		cout<<endl;
	}	
}
