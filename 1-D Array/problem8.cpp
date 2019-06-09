#include<iostream>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	int c=0;
	int a[n],b[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		cin>>b[i];
	for(i=0;i<n;i++)
		a[i]=a[i]^b[i];
	
	for(i=0;i<n;i++)
		if(a[i]==1)
			c++;
	
	cout<<c;
}
