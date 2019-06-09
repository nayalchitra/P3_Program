#include<iostream>
using namespace std;

int main()
{
	int n,i,j,index;
	cin>>n;
	int arr[n];
	int a,b;
	cin>>a>>b;
	int arr2[a][b];
	if(n==(a*b))
	{
		for(i=0;i<n;i++)
			cin>>arr[i];
			
		for(index=0;index<n;index++)
		{
			i=index/b;
			j=index%b;
			arr2[i][j]=arr[index];
		}
		 
		for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++)
				cout<<arr2[i][j]<<" ";
			cout<<endl;
		}
	}
	else
		cout<<"not possible";
}
