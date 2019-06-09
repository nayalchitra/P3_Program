#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i;
	int a,r;
	cin>>n;
	cin>>a>>r;
	int term;
	long int sum;
	cout<<a<<" ";
	for(i=2;i<=n;i++)
	{
		term=a*pow(r,i-1);
		cout<<term<<" ";
	}
	cout<<endl;
	sum=a*(pow(r,n)-1);
	cout<<sum;
}
