// palindrome of a string 

#include<iostream>
#include<string.h>
using namespace std;

int ispallindrome(string s,int l,int n)
{
	if(l>=n)
		return 1;
	if(s[l]!=s[n])
		return 0;
	
	return ispallindrome(s,l+1,n-1);
}
int main()
{
	string s;
	cin>>s;
	cout<<ispallindrome(s,0,s.length()-1);
}
