// generate all substrings of a string 

#include<iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int i,j;
	
	for(j=1;j<=s.length();j++)
	{
		for(i=0;(i+j)<=s.length();i++)
			cout<<s.substr(i,j)<<endl;
	}
}

