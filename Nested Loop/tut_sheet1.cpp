

#include<iostream>
using namespace std;

int main()
{
	int n,i,j,k;
	cin>>n;
	int a[n];
	cin>>k;
	for(i=0;i<n;i++)
		cin>>a[i];
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==k)
			{
				cout<<"yes";
				return 0;
			}
		}
	}
	cout<<"no";
}
