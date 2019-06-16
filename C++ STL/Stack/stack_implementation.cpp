
// stack implementation

#include<iostream>
#include<stack>
using namespace std;

void Display_Stack(stack <int> s)
{
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
}


int main()
{
	stack <int> s;
	s.push(10);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(6);
	
	Display_Stack(s);
	cout<<"size of stack "<<s.size()<<endl;
}
