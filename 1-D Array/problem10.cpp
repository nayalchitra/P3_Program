
// program to find xor of two binary numbers.

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
	for(i=0;i<n;i++)
	{
		cout<<(a[i]^b[i])<<" ";
	}
}
