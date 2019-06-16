
// implement queue

#include<iostream>
#include<queue>
using namespace std;

void Show_queue(queue<int> q)
{
	cout<<"elements of the queue :"<<endl;
	while(!q.empty())
	{
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
}

int main()
{
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	
	Show_queue(q);
	cout<<"size :"<<q.size()<<endl;
	cout<<"front element : "<<q.front()<<endl;
	cout<<"last element: "<<q.back()<<endl;
}
