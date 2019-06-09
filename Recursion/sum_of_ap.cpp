// sum of an A.P

#include<iostream>
using namespace std;

int sumofap(int d,int n)
{
	if(n<=1)
		return 0;
	return d+sumofap(d,n-1);
}

int main()
{
	int a,n,d;
	cin>>a>>d>>n;
	cout<<(a+sumofap(d,n));
}
