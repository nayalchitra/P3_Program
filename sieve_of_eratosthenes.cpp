
// print all prime numbers from 1 to n


#include<iostream>
using namespace std;


void Print_prime(int n)
{
	bool prime[n+1];
	memset(prime,true,sizeof(prime));
	int i,j;
	for(i=2;i<=sqrt(n);i++)
	{
		if(prime[i])
		{
			for(j=i*i;j<=n;j++)
			{
				prime[i]=false;
			}
		}
	}
	
	for(i=2;i<=n;i++)
	{
		if(prime[i])
			cout<<i<<" ";
	}
}


int main()
{
	int n;
	cin>>n;
	Print_prime(n);
}
