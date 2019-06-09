#include<iostream>
using namespace std;

int main()
{
	int n,i,max1,max2;
	cin>>n;
	int a[n],b[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	int m2=0,m1=0;
	if(a[0]>a[1])
	{
		max1=a[0];
		m1=0;
		max2=a[1];
		m2=1;
	}
	else
	{
		max1=a[1];
		m1=1;
		max2=a[0];
		m2=0;
	}

	for(i=2;i<n;i++)
	{
		if(a[i]>max1)
		{
			m2=m1;
			max1=a[i];
			m1=i;
		}
		else if(a[i]<max1 && a[i]>max2)
		{
			max2=a[i];
			m2=i;
		}
	}
	for(i=m2;i<n-1;i++)
		a[i]=a[i+1];
	for(i=0;i<n-1;i++)
		cout<<a[i]<<" ";
		
}
