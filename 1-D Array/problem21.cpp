#include<iostream>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	
	int count=0;	
	for(i=0;i<n;i++)
		if(a[i]==1)
			count++;
			
	if(count%2==0)
		cout<<"0";
	else
		cout<<"1";
}
