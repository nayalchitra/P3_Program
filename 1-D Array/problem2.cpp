#include<iostream>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	if(n==1)
	{
		cout<<a[0];
		return 0;
	}
	else if(n==2)
	{
		if(a[0]>a[1])
			cout<<a[0];
		else
			cout<<a[1];
		return 0;
	}
	for(i=1;i<n-1;i++)
		if(a[i]>a[i-1] && a[i]>a[i+1])
			cout<<a[i]<<" ";
}
