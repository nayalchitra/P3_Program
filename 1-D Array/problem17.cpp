#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	
	int sum=0;
	int k=0;
	for(i=n-1;i>=0;i--)
	{
		sum+=pow(2,i)*a[k];
		k++;
	}
	cout<<sum;	
}
