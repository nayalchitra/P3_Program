// check if a number is odd or even

#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n & 1<<0)
			cout<<"Odd number";
		else
			cout<<"Even number";
		cout<<endl;
	}
}
