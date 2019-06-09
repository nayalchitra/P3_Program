#include<iostream>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	int k,l,c=0;
	cin>>k>>l;
	for(i=0;i<n;i++)
	{
		if(a[i]>=k &&a[i]<=l)
			c++;
	}
	cout<<c;
}
