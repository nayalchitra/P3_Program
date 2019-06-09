#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j;
	cin>>n;
	int a=1,b=n,im=n;
	for(i=1;i<=2*n-1;i++)
	{
		for(j=1;j<=n;j++)
		{
			if((j==1 && i<n)||(i>n && j==n))		//	if(j==1||j==n||i==(n))
			{										//cout<<"*";
				cout<<a;							//else
				a++;								//cout<<" ";
			}
			else if((j==n && i<n)||(i>n && j==1))
			{
				cout<<b;
				b--;
			}
			else if(i==n)
			{
				cout<<im;
				im--;
			}
			else
				cout<<" ";
		}
		if(i==n)
		{
			a--;
			b++;
			swap(a,b);
		}
		cout<<endl;
	}
}
