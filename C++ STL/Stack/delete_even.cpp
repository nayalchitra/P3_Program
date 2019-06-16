// delete all even elements from the stack 

#include<iostream>
#include<stack>
using namespace std;


void Display_stack(stack <int> s)
{
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
}

void Delete_even(stack <int>s)
{
	stack <int> s2;
	while(!s.empty())
	{
		int val=s.top();
		s.pop();
		if(val%2!=0)
			s2.push(val);
	}
	
	while(!s2.empty())
	{
		s.push(s2.top());
		s2.pop();
	}
	
	Display_stack(s);
}


int main()
{
	stack <int> s;
	s.push(3);
	s.push(24);
	s.push(12);
	s.push(5);
	s.push(6);
	s.push(42);
	s.push(2);
	s.push(9);
	s.push(4);
	Delete_even(s);
	
}
