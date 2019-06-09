#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,n;
	int x;
	cin>>n>>x;
	double term=1;
	cout<<term<<" ";
	double sum=term;
	for(i=1;i<n;i++)
	{
		term=term*x/i;
		cout<<term<<" ";
		sum+=term;
	}
	cout<<endl<<endl;
	cout<<sum;
}
