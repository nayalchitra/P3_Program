#include<iostream>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	int a[n],b[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		cin>>b[i];
	int max=a[0]/b[0];
	for(i=1;i<n;i++)
		if(max<(a[i]/b[i]))
			max=a[i]/b[i];
	max*=100;
	cout<<max;
}
