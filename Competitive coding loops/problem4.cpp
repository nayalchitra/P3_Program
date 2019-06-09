#include<iostream>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	int max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<=0)
		{
			cout<<max;
			return 1;
		}
		if(a[i]>max)
			max=a[i];
	}
}
