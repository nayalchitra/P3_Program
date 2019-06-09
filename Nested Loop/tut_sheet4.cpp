#include<iostream>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	int a[n];
	int k,j;
	cin>>k;
	for(i=0;i<n;i++)
		cin>>a[i];
	
	for(i=0;i<n;i++)
	{
		int c=1;
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
				c++;
		}
		if(c<k)
		{
			for(j=i+1;j<n;j++)
			{
					if(a[i]==a[j])
						c++;
			}
			if(c==k)
				cout<<a[i]<<endl;
		}
	}
}
