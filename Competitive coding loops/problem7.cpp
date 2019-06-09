#include<iostream>
#include<math.h>
using namespace std;

bool isprime(int a)
{
	int i;
	int limit=sqrt(a);
	for(i=2;i<=limit;i++)
	{
		if(a%i==0)
			return false;
	}
	return true;
}

int main()
{
	int a,b;
	cin>>a>>b;
	if(isprime(a)&&isprime(b))
	{
		if((b-a)==2)
			cout<<"yes";
		else
			cout<<"no";
	}
	else
		cout<<"no";
}
