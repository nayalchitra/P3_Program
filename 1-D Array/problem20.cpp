#include<iostream>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	int k;
	cin>>k;
	for(i=k;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	for(i=0;i<n-1;i++)
		cout<<a[i]<<" ";
}
