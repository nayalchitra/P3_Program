/* program to modify the array such that all negative numbers are follwed
by positive number 

Input : -10 5 -7 18 6
Output : -10 -7 5 18 6
*/

#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			int temp=a[i];
			j=i-1;
			while(j>=0 and a[j]>0)
			{
				a[j+1]=a[j];
				j--;
			}
			a[j+1]=temp;
		}
	}
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
}
