// powerful power function
// a^n= (a^(n/2))^2				n=2^k

#include<iostream>

using namespace std;

long int powerful_power(int a,int n)
{
	if(n==0)
		return 1;
	if(n==1)
		return a;
	 return powerful_power(a,n/2) * (powerful_power(a,n/2));
}

int main()
{
	int a,n;
	cin>>a>>n;
	cout<<powerful_power(a,n);
}
