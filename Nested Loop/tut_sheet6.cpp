#include<iostream>
using namespace std;

int main()
{
	int m,n,i,j;
	cin>>m>>n;
	int a[m][n];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
			
	int b[10000],c[10000];
	int k=0,l=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]%2==0)
			{
				b[k]=a[i][j];
				k++;	
			}	
			else
			{
				c[l]=a[i][j];
				l++;
			}
		}
	}
	for(i=0;i<k;i++)
		cout<<b[i]<<" ";
	cout<<endl;
	for(i=0;i<l;i++)
		cout<<c[i]<<" ";
}
