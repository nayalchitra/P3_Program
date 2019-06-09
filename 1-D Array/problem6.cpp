#include<iostream>
using namespace std;

int main()
{
	int n,i,j,k;
	cin>>n;
	int a[n],b[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		cin>>b[i];
	i=0,j=0;
	while(i<n)
	{
		if(a[i]!=b[j])
		{
			j++;
			if(j==n)
				cout<<a[i]<<" ";
		}
		else
		{
			j=0;
			i++;
		}
	}
}
