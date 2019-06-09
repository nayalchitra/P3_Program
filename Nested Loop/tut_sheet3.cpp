#include<iostream>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	
	int max=0;
	int ele,j;
	for(i=0;i<n;i++)
	{
		int c=1;
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
				c++;
		}
		if(c==1)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
					c++;
			}
			if(c>max)
			{
				max=c;
				ele=a[i];
			}
		}
	}
	cout<<ele<<" "<<max;
}
