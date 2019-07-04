/*

example :
input :
9
10 22 9 32 21 50 41 60 80

output:
6
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int L[n+1];
	
	L[0]=1;
	for(int i=1;i<n;i++)
	{
		L[i]=1;
		for(int j=0;j<i;j++)
		{
			if(a[i] > a[j] && L[i] < L[j] + 1)
			{
				L[i]=L[j]+1;
			}
		}
	}
	cout<<L[n-1];
}
