
// check for the balanced parentheses using satck

#include<iostream>
#include<stack>
using namespace std;


bool isParentheses(string str)
{
	stack <char> s;
	int len=str.length();
	int i;
	for(i=0;i<len;i++)
	{
		if(str[i]=='('||str[i]=='{'||str[i]=='[')
			s.push(str[i]);
		else
		{
			if(s.empty())
				return false;
			char temp=s.top();
			s.pop();
			if(str[i]==')')
			{
				if(temp=='{'||temp=='[')
					return false;
			}
			else if(str[i]=='}')
			{
				if(temp=='('||temp=='[')
					return false;
			}
			else if(str[i]==']')
			{
				if(temp=='{'||temp=='(')
					return false;
			}
		}
	}
	if(s.empty())
		return true;
	else
		return false;
}


int main()
{
	string str;
	cin>>str;
	if(isParentheses(str))
		cout<<"Balanced"<<endl;
	else
		cout<<"Not Balanced"<<endl;
}
