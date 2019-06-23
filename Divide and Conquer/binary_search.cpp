// binary search

#include<iostream>
using namespace std;

int binary_search(int a[],int start,int end,int key)
{
	if(start>end)
		return -1;
	int mid=(start+end)/2;
	if(a[mid]==key)
		return mid;
	if(a[mid]>key)
		return binary_search(a,start,mid-1,key);
	else
		return binary_search(a,mid+1,end,key);
}

int main()
{
	int a[]={-1,0,9,14,20,25,30};
	int i,len=sizeof(a)/sizeof(a[0]);
	int key=25;
	cout<<binary_search(a,0,len-1,key);
}
