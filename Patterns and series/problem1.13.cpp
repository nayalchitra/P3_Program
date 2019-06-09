#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,n=15;
	int a=0;
	int b=25;
	for(i=1;i<=n;i++)
	{
		cout<<char('A'+a)<<char('A'+b)<<" ";
		a+=2;
		b-=1;
		if(b<0)
			b=25;
		if(a>25)
			a=0;
	}
}
