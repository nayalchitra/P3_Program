#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j;
	cin>>n;
	long int a=2;
	long int b=10;
	long long int sum=a+b;
	cout<<a<<" "<<b<<" ";
	for(i=3;i<=2*n;i++)
	{
		if(i%2==0)
		{
			a*=3;
			cout<<a<<" ";
			sum+=a;
		}
		else
		{
			b*=2;
			cout<<b<<" ";
			sum+=b;
		}
	}
	cout<<endl;
	cout<<"sum = "<<sum;
	
		
}
