// program to check if a number is a power of 4?

#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n;
		int count=0;
		int index;
		int NO_OF_BITS=sizeof(int)*8;
		for(k=0;k<NO_OF_BITS;k++)
		{
			if(n & 1<<k)
			{
				count++;
				index=k;
			}
		}
		if(count==1 && index%2==0)
			cout<<"Yes";
		else
			cout<<"No";	
		cout<<endl;
	}
}
