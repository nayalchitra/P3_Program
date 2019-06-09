// reverse array

#include<iostream>
using namespace std;

void reverse_array(int a[],int n)
{
	if(n<0)
		return;
	cout<<a[n]<<" ";
	reverse_array(a,n-1);
}

int main()
{
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	reverse_array(a,n-1);
}
