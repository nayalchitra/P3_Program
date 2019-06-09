#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	cin>>n;
	int c=1;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	
	 for(i=0;i<n;i++)
	 {
	 	c=1;
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
			cout<<a[i]<<":"<<c<<endl;
		}
	 }
}
