//check if two given stacks are same 

#include<iostream>
#include<stack>
using namespace std;


bool compare_stack(stack<int> s1,stack<int>s2)
{
	if(s1.size()!=s2.size())
		return false;
	else
	{
		while(!s1.empty() && !s2.empty())
		{
			if(s1.top()!=s2.top())
				return false;
			else
			{
				s1.pop();
				s2.pop();
			}
		}
	}
	return true;
}

int main()
{
	stack<int>s1;
	stack <int>s2;
	s1.push(2);
	s1.push(3);
	s1.push(4);
	s1.push(5);
	
	s2.push(4);
	s2.push(3);
	s2.push(2);
	s2.push(7);
	
	if(compare_stack(s1,s2))
		cout<<"same";
	else
		cout<<"not same";
}
