// program to check if a number is a power of 2?

//method 1: using bit manipulation
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



// method 2 : using log2

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>> n;
	if(ceil(log2(n)) == floor(log2(n)) )
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
