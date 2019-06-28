//generate all substrings of a string

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int i,j;
	for(i=0;i<s.length();i++)
	{
		for(j=i+1;j<=s.length();j++)
			cout<<s.substr(i,j-i)<<endl;
	}	
}
