// program to check if a number is a power of 2?

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int NO_OF_BITS=sizeof(int)*8;
	int k,count=0;
	for(k=0;k<NO_OF_BITS;k++)
	{
		if(n & 1<<k)
			count++;
	}
	if(count==1)
		cout<<"Yes";
	else
		cout<<"No";
}
