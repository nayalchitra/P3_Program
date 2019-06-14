/*
Delete alternate nodes of a linked list
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
	node *p=(*head);
	node *temp=(*head)->next;
	while(temp!=NULL && temp->next!=NULL)
	{
		p->next=temp->next;
		p=p->next;
		temp=p->next;
	}
	p->next=NULL;
}

void PrintList(node *head)
{
	node *temp=head;
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
	int n,val,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>val;
		Insert(&head,val);
	}
	PrintList(head);
	cout<<endl;
	Modify_List(&head);
	PrintList(head);
}
