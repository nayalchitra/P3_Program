#include<iostream>
#include<math.h>
using namespace std;

bool isprime(int n)
{
	int i;
	int limit=sqrt(n);
	for(i=2;i<=limit;i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}

int main()
{
	int n;
	cin>>n;
	int i,f=0;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			if(isprime(i) && isprime(n/i))
			{
				f=1;
				break;
			}
		}
		else
			f=0;
	}
	if(f==1)
		cout<<i<<" "<<(n/i)<<" "<<"yes";
	else
		cout<<"no";
}
