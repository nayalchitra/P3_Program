#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j,k;
	cin>>n;
	int tospace=n-1;
	int toprint=1;
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=tospace;k++)
		{
			cout<<" ";
		}
		for(j=1;j<=(toprint);j++)
		{
			cout<<"*";
		}
		tospace-=1;
		toprint+=2;
		cout<<endl;
	}
}
