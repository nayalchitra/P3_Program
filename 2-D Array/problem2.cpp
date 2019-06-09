#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	cin>>n;
	int a[n][n];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
			
	for(i=0;i<n;i++)
		cout<<a[i][i]<<" ";
	cout<<endl;
	
	for(i=0;i<n;i++)
		cout<<a[i][n-i-1]<<" ";
}
