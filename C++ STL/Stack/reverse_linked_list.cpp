// reverse a linked list using stack

#include<iostream>
#include<stack>
using namespace std;

class node{
	public :
		int data;
	node *next;
};


void Display_linked_list(node *h)
{
	node *temp=h;
	while(temp!=NULL)
	{
		cout<<(temp->data)<<" ";
		temp=temp->next;
	}
}


node * Reverse_linked_list(node *head)
{
	stack <node *>s;
	node *temp=head;
	while(temp->next!=NULL)
	{
		s.push(temp);
		temp=temp->next;
	}
	head=temp;
	while(!s.empty())
	{
		temp->next =s.top();
		s.pop();
		temp=temp->next;
	}
	temp->next=NULL;
	return head;
}

void Insert(node **head, int val)
{
	node *temp=new node();
	temp->data=val;
	if((*head)==NULL)
	{
		(*head)=temp;
		temp->next=NULL;
		return;
	}
	temp->next=(*head);
	(*head)=temp;
}

int main()
{
	node *head=NULL;
	Insert(&head,10);
	Insert(&head,5);
	Insert(&head,8);
	Insert(&head,7);
	cout<<"original linked list"<<endl;
	Display_linked_list(head);
	cout<<endl;
	node *h = Reverse_linked_list(head);
	cout<<"reversed linked list"<<endl;
	Display_linked_list(h);
}
