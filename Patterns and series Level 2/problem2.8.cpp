#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	cin>>n;
	if(n<3)
	{
		cout<<"not possible";
		return 0;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j==1||j==n||i==j)
				cout<<i;
			else
				cout<<" ";
		}
		cout<<endl;
	}
}
