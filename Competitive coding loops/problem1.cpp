// Program to find sum of factorial of digits of a number


#include<iostream>
using namespace std;

long int fact(int n)
{
	if(n<=1)
		return 1;
	return n*fact(n-1);
}


int main()
{
	long int n,sum=0;
	cin>>n;
	int a;
	while(n>0)
	{
		a=n%10;
		sum+=fact(a);
		cout<<sum<<endl;
		n=n/10;
	}
	cout<<sum;
}
