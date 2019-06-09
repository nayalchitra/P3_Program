#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j,k,l;
	cin>>n;
	int tospace=n/2;
	//int ispace=1;
	int toprint=1;
	for(i=1;i<=n/2;i++)
	{
		for(k=1;k<=tospace;k++)
			cout<<" ";
		for(j=1;j<=toprint;j++)
		{
			if(j==1||j==toprint)
				cout<<"*";
			else
			{
				cout<<" ";
			}
			
		}	
		tospace--;
		toprint+=2;	
		cout<<endl;
	}
	for(i=n/2+1;i<=n;i++)
	{
		for(k=1;k<=tospace;k++)
			cout<<" ";
		for(j=1;j<=toprint;j++)
		{
			if(j==1||j==toprint)
				cout<<"*";
			else
			{
				cout<<" ";
			}
			
		}	
		tospace++;
		toprint-=2;	
		cout<<endl;
	}
}
