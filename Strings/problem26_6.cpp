// program to remove vowels from a string

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	string s1="";
	int i,len=s.length();
	for(i=0;i<len;i++)
	{
		char p = tolower(s[i]); 
		if(p=='a'||p=='e'||p=='i'||p=='o'||p=='u');
		else
			s1+=s[i];
	}
	cout<<s1;
}
