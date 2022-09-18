
// check if the kth bit of a number is set

#include<iostream>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	if(n & 1<<k)
		cout<<"Yes";
	else
		cout<<"No";
}
