// check if matrix is a magic matrix

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
			
	int sum1=0,sum2=0;
	int f=0;
	for(i=0;i<n;i++)
		sum1+=a[0][i];
		
	for(i=1;i<n;i++)
	{
		sum2=0;
		for(j=0;j<n;j++)
			sum2+=a[i][j];
		if(sum1==sum2)
			f=1;
		else
		{
			f=0;
			break;
		}
	}
	if(f==1)
	{
	
		for(j=0;j<n;j++)
		{
			sum2=0;
			for(i=0;i<n;i++)
			{
				sum2+=a[i][j];	
			}
			if(sum1==sum2)
				f=1;
			else
			{
				f=0;
				break;
			}
		}
		if(f==1)
		{
			sum2=0;
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					if(i==j)
						sum2+=a[i][j];
				}
			}
			if(sum1==sum2)
				f=1;
			else
				f=0;
			
			if(f==1)
			{
				sum2=0;
				for(i=0;i<n;i++)
				{
					for(j=0;j<n;j++)
					{
						if(j==n-i-1)
							sum2+=a[i][j];
					}
				}
				if(sum1==sum2)
					f=1;
				else
					f=0;
				if(f==1)
					cout<<"Magic Matrix";
				else
					cout<<"Not Magic MAtrix ";
			}
			else
				cout<<"Not Magic Matrix";
		}
		else
			cout<<"Not Magic Matrix";
	}
	else
		cout<<"Not Magic Matrix";
}
