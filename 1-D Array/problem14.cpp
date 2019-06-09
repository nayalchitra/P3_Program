#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	cin>>n;
	int a[n];
	int f=0;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0,j=n-1;i<j;i++,j--)
	{
		if(a[i]==a[j])
			f=1;
		else
		{
			f=0;
			break;
		}
	}
	if(f==1)
		cout<<"pallindrome";
	else
		cout<<"not pallindrome";
}
