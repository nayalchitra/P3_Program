// Given a string str, we need to print reverse of individual words

#include<iostream>
#include<stack>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	string outstring="";
	stack<char> stk;
	int i=0;
	int len=s.length();
	
	while(1)
	{
		while(s[i]!=' '&& s[i]!='\0')
		{
			stk.push(s[i]);
			i++;	
		}
		while(!stk.empty())
		{
			outstring+=stk.top();
			stk.pop();
		}
		outstring+=s[i];
		i++;
		if(i>=len)
			break;
	} 
	cout<<outstring;
}
