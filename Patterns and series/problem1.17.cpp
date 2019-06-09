#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	int a,b,c;
	cin>>a>>b>>c;
	int d;
	long int sum=0;
	if((b-a)==(c-b))
		d=b-a;
	else
	{
		cout<<"invalid series";
		exit(0);
	}
	cout<<a<<" "<<b<<" "<<c<<" ";
	sum=a+b+c;
	int term=c;
	for(i=4;i<=n;i++)
	{
		term=a+(i-1)*d;
		cout<<term<<" ";
		sum+=term;
	}
	cout<<endl;
	cout<<sum;
}
