// mergesort implementation

#include<iostream>
using namespace std;

void merge(int a[],int start,int mid,int end)
{
	int i,j;
	int n1=mid-start+1;
	int n2=end-mid;
	int L[n1];
	int R[n2];
	for(i=0;i<n1;i++)
		L[i]=a[start+i];
	for(j=0;j<n2;j++)
		R[j]=a[mid+1+j];
	i=0;
	j=0;
	int k=start;
	while(i<n1 && j<n2)
	{
		if(L[i]<=R[j])
		{
			a[k]=L[i];
			i++;
		}
		else
		{
			a[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		a[k]=L[i];
		k++;
		i++;
	}
	while(j<n2)
	{
		a[k]=R[j];
		k++;
		j++;
	}
}

void mergesort(int a[],int start,int end)
{
	if(start<end)
	{
		int mid=(start+end)/2;
		mergesort(a,start,mid);
		mergesort(a,mid+1,end);
		merge(a,start,mid,end);
	}
}

int main()
{
	int a[]={38,37,43,3,9,82,10};
	int len=sizeof(a)/sizeof(a[0]);
	mergesort(a,0,len-1);
	for(int i=0;i<len;i++)
	{
		cout<<a[i]<<" ";
	}
}
