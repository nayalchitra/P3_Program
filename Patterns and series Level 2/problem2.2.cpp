#include<bits/stdc++.h>
using namespace std;

int main()
{
	int r,c,i,j;
	cin>>r>>c;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c+i;j++)
		{
			
			if(i==1||(i==r && j>=i)||j==i||j==(c+i))
				cout<<"*";
			
			else
				cout<<" ";
		}
		cout<<endl;
	}
}
