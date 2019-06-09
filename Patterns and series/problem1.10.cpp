#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,k,j;
	cin>>n;
	int tospace=n/2;
	int toprint=1;
	for(i=1;i<=n/2;i++)
	{
		for(k=1;k<=tospace;k++)
			cout<<" ";
		for(j=1;j<=toprint;j++)
			cout<<"*";
		
	
			tospace--;
			toprint+=2;
		cout<<endl;
	}
	for(i=n/2+1;i<=n;i++)
	{
		for(k=1;k<=tospace;k++)
			cout<<" ";
		for(j=1;j<=toprint;j++)
			cout<<"*";
		
	
			tospace++;
			toprint-=2;
		cout<<endl;
	}	
}
