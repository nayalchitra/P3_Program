/* sum of two large numbers 
	Given two numbers as strings. The numbers may be very large, the task is to find sum of these two numbers
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	string sum="";
	int l1=s1.length()-1;
	int l2=s2.length()-1;
	int carry=0;
	int num=0;
	while(l1>=0||l2>=0)
	{
		if(s1[l1]!='\0')
			num=s1[l1]-'0';
		else
			num=0;
		if(s2[l2]!='\0')
			num+=s2[l2]-'0';
		else
			num+=0;
		num+=carry;
		sum+=(num%10)+'0';
		carry=num/10;
		l1--;
		l2--;
	}
	if(carry)
		sum+=carry+'0';
	reverse(sum.begin(),sum.end());
	cout<<sum<<endl;
} 
