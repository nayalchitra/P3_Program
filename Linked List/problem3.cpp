/*
Delete linked list nodes which have a greater value on left side .
Given a singly linked list , the task is to remove all the nodes which have a greater value on left side
*/


#include<iostream>
using namespace std;


class node{
	public:
		int data;
	node *next;
};


void Modify_List(node **head)
{
	node *temp=(*head);
	int max=temp->data;
	node *p=temp;
	temp=temp->next;
	while(temp!=NULL)
	{
		if(max>(temp->data))
		{
			p->next=temp->next;
			temp=p->next;
		}
		else
		{
			max=(temp->data);
			p=temp;
			temp=temp->next;
		}
	}
}


void PrintList(node *head)
{
	node *temp = head;
	while(temp!=NULL)
	{
		cout<<(temp->data)<<" ";
		temp=temp->next;
	}
}

void Insert(node **head,int val)
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
	Insert(&head,3);
	Insert(&head,2);
	Insert(&head,6);
	Insert(&head,5);
	Insert(&head,11);
	Insert(&head,10);
	Insert(&head,15);
	Insert(&head,12);
	PrintList(head);
	cout<<endl;
	Modify_List(&head);
	PrintList(head);
}

