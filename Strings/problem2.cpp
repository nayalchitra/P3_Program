// Program to count the number of digits in a string

#include<iostream>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	char c[n];
	cin>>c;
	
	int count=0;
	for(i=0;i<n;i++)
	{
		if(c[i]>='0' && c[i]<='9')
			count++;
	}
	cout<<count;
}
