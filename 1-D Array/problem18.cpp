#include<iostream>
using namespace std;

int main()
{
	int n,i=0;
	cin>>n;
	int a[n];
	while(n>0)
	{
		a[i]=n%2;
		n/=2;
		i++;
	}
	for(int j=i-1;j>=0;j--)
		cout<<a[j]<<" ";
}
