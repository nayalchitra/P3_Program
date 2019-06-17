
// program to the find index of the element in an array


#include<iostream>
using namespace std;

int main()
{
	int i,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	int b;
	cin>>b;
	for(i=0;i<n;i++)
	{
		if(a[i]==b)
		{
			cout<<i;
			return 0;
		}
	}
	cout<<"number does not exists";
}
