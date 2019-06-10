/* program to shift the 0's at even position and 1's at odd position in a binary array.
If there are more 0's than 1's or vice-versa put them at the end of array 

Input : 5
	1 0 0 0 1
	
Output:0 1 0 1 0

*/

#include<iostream>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	int a[n];
	int zero=0;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		if(a[i]==0)
			zero++;
			
	int ones=n-zero;
	i=0;
	while(zero>0 and ones>0)
	{
		if(i%2==0)
		{
			a[i]=0;
			zero--;
		}
		else
		{
			a[i]=1;
			ones--;
		}
		i++;
	}
	while(zero>0)
	{
		a[i]=0;
		zero--;
		i++;
	}
	while(ones>0)
	{
		a[i]=1;
		ones--;
		i++;
	}
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
}
