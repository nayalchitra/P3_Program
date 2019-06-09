#include<iostream>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	int a[n],b[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	int max=a[n-1];
	int k=0;
	b[k]=max;
	k++;
	for(i=n-2;i>=0;i--)
	{
		if(max<a[i])
		{
			max=a[i];
			b[k]=max;
			k++;
		}
	}
	for(i=k-1;i>=0;i--)
		cout<<b[i]<<" ";
}
