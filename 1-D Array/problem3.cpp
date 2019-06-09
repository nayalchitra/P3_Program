#include<iostream>
using namespace std;

int main()
{
	int n,i,c=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	int sum=0;
	for(i=0;i<n;i++)
		sum+=a[i];
	sum=sum/n;
	for(i=0;i<n;i++)
		if(a[i]>sum)
			c++;
	cout<<c;
}
