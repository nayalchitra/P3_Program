#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n,i,m;
	cin>>n>>m;
	int sum1=0,sum2=0;
	int a[n],b[m];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<m;i++)
		cin>>b[i];
	int k=0;
	for(i=n-1;i>=0;i--)
	{
		sum1+=pow(2,k)*a[i];
		k++;
	}
	k=0;
	//cout<<sum1<<endl;
	for(i=m-1;i>=0;i--)
	{
		sum2+=pow(2,k)*b[i];
		k++;
	}
	//cout<<sum2<<endl;
	cout<<(sum1-sum2);	
}
