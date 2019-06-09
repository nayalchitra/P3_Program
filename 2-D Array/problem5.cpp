// zig - zag order print

#include<bits/stdc++.h>

using namespace std;


void preverse(int a[][4],int k,int N)
{
	int start_row,start_col;
	if(k<N)
	{
		start_row=k;
		start_col=0;
	}
	else
	{
		start_row=N-1;
		start_col=k-N+1;
	}
	for( ;start_row>=0 && start_col <N;start_row--,start_col++)
		cout<<a[start_row][start_col]<<" ";
}


void pstraight(int a[][4],int k,int N)
{
	int start_row,start_col;
	if(k<N)
	{
		start_row=0;
		start_col=k;
	}
	else
	{
		start_row=k-N+1;
		start_col=N-1;
	}
	for( ;start_row<N && start_col >=0; start_row++,start_col--)
		cout<<a[start_row][start_col]<<" ";
}

int main()
{
	int i,j;
	int a[4][4];
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
			cin>>a[i][j];
			
	int k;
	for(k=0;k<=2*4-1;k++)
	{
		if(k%2==0)
		// print in reverse order
			preverse(a,k,4);
		else
			// print in a stright
			pstraight(a,k,4);
	}
}
