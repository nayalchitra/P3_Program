#include<iostream>
using namespace std;

int main()
{
	int a,b,i;
	cin>>a>>b;
	if(a<b)
	{
		for(i=2;i<=a/2;i++)
		{
			if(a%i==0 && b%i==0)
			{
				cout<<"not co-prime";
				return 0;
			}
		}
		cout<<"co-prime";
	}
	else
	{
		for(i=2;i<=b/2;i++)
		{
			if(a%i==0 && b%i==0)
			{
				cout<<"not co-prime";
				return 0;
			}
		}
		cout<<"co-prime";
	}
}
