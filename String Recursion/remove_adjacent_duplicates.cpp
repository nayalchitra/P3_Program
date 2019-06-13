// Recursively remove all adjacent duplicates

#include<iostream>
using namespace std;


string ReverseString(string s,int begin,int end)
{
	if(end<begin)
		return s;
	swap(s[begin],s[end]);
	return ReverseString(s,begin+1,end-1);
}

string RemoveDuplicates(string s,int n,string s1)
{
	if(n==0)
		return s1+s[n];
	if(s[n-1]!=s[n])
		s1+=s[n];
	return	RemoveDuplicates(s,n-1,s1);
}

int main()
{
	string s;
	cin>>s;
	int len=s.length();
	string s1="";
	string s2;
	s2 = RemoveDuplicates(s,len-1,s1);
	int length=s2.length();
	cout<<ReverseString(s2,0,length-1);	
} 
