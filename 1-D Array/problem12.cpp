#include<iostream>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	int a[n],b[n],c[n+n];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		cin>>b[i];
	i=0;
	int j=0,k=0;
	while(i<n && j<n)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;
			k++;
		}
		else
		{
			c[k]=b[j];
			j++;
			k++;
		}
	}
	while(i<n)
	{
		c[k]=a[i];
		i++;
		k++;
	}
	while(j<n)
	{
		c[k]=b[j];
		j++;
		k++;
	}
	for(i=0;i<k;i++)
		cout<<c[i]<<" ";
}
