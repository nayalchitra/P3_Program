// get minimum element from the stack

#include<iostream>
#include<stack>
using namespace std;

int getMinElement(stack <int> s)
{
	int min=s.top();
	s.pop();
	while(!s.empty())
	{
		if(min>s.top())
			min=s.top();
		s.pop();
	}
	return min;
}

int main()
{
	stack <int> s;
	s.push(3);
	s.push(9);
	s.push(7);
	s.push(11);
	s.push(4);
	s.push(10);
	cout<<getMinElement(s);
}
