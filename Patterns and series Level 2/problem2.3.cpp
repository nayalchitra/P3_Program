#include<iostream>
using namespace std;

int main()
{
	int n,i,k,j;
	cin>>n;
	int tospace =0;
	int l=1;
	int x,m;
	int y=n*n+1;
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=tospace;k++)
			cout<<" ";
		for(j=1;j<=2*n-tospace;j++)
		{
			if(j%2==0)
				cout<<"*";
			else
			{
				cout<<l;
				l++;
			}
		}
		m=y;
		for(x=1;x<=2*n-1-tospace;x++)
		{
			if(x%2==0)
				cout<<"*";
			else
			{
				cout<<m;
				m++;
			}
		}
		y=y-(n-i);
		tospace+=2;
		cout<<endl;
	}
}
