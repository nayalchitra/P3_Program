#include<iostream>
using namespace std;

int main()
{
	int r1,c1,r2,c2,i,j,k;
	cin>>r1>>c1>>r2>>c2;
	
	int a[r1][c1],b[r2][c2],c[r1][c2];
	
	
	if(c1==r2)
	{
		for(i=0;i<r1;i++)
			for(j=0;j<c1;j++)
				cin>>a[i][j];
			
		for(i=0;i<r2;i++)
			for(j=0;j<c2;j++)
				cin>>b[i][j];
				
		for(i=0;i<c1;i++)
		{
			for(j=0;j<r2;j++)
			{
				c[i][j]=0;
				for(k=0;k<c1;k++)
				{
					c[i][j] += a[i][k]*b[k][j];
				}
			}
		}
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
				cout<<c[i][j]<<" ";
			cout<<endl;
		}
	}
	else
		cout<<"Multiplication not possible";
			
		
		
}
