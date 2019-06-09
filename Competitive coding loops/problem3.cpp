#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int i=0;
	int c=0,sum=0;
	while(n>0)
	{
		sum+=pow(2,i)*(n%10);
		n=n/10;
		i++;
	}
	cout<<sum;
}
