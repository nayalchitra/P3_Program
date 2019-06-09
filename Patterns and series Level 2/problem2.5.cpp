#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,n;
	cin>>n;
	int a=1;
	int b=1;
	cout<<a<<" "<<b<<" ";
	for(i=3;i<=n;i++)
	{
		if(i%2==0)
		{
			a*=3;
			cout<<a<<" ";
		}
		else
		{
			b*=2;
			cout<<b<<" ";
		}
	}
}
