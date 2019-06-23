// quicksort implementation

#include<iostream>
using namespace std;						

int partition(int a[],int s,int e)
{
	int j;
	int i=s-1;
	int pivot=a[e];
	for(j=s;j<=e-1;j++)
	{
		if(a[j]<=pivot)
		{
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[e]);
	return i+1;
	
}

void quicksort(int a[],int start,int end)
{
	if(start<end)
	{
		int p = partition(a,start,end);
		quicksort(a,start,p-1);
		quicksort(a,p+1,end);
	}
}

int main()
{
	int a[]={2,9,8,7,5,4,3,10,6};
	int i;
	int len=sizeof(a)/sizeof(a[0]);
	quicksort(a,0,len-1);
	for(i=0;i<len;i++)
		cout<<a[i]<<" ";
}
