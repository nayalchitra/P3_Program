/*
Given two linked list of same size , the task is to create a new linked list using those linked list.
The condition is that the graeter node among both linked list will be added to the new linked list.
*/

#include<iostream>
using namespace std;

class node{
	public:
		int data;
	node *next;
};


void Merge_list(node **head3,node *head1,node *head2)
{
	node *temp1=head1;
	node *temp2=head2;
	node *p=new node();
	if((*head3)==NULL)
	{
		if((temp1->data)>(temp2->data))
		{
			p->data=temp1->data;
			temp1=temp1->next;
			temp2=temp2->next;
			(*head3)=p;
			p->next=NULL;
		}
		else
		{
			p->data=temp2->data;
			temp1=temp1->next;
			temp2=temp2->next;
			(*head3)=p;
			p->next=NULL;
		}
	}
	while(temp2!=NULL && temp1!=NULL)
	{
		node *q=new node();
		if((temp1->data)>(temp2->data))
		{
			q->data=temp1->data;
			temp1=temp1->next;
			temp2=temp2->next;
			p->next=q;
			p=q;
		}
		else
		{
			q->data=temp2->data;
			temp1=temp1->next;
			temp2=temp2->next;
			p->next=q;
			p=q;
		}
	}
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
	node *head1=NULL;
	node *head2=NULL;
	int i;
	int val;
	int n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>val;
		Insert(&head1,val);
	}
	for(i=0;i<n;i++)
	{
		cin>>val;
		Insert(&head2,val);
	}
	PrintList(head1);
	cout<<endl;
	PrintList(head2);
	cout<<endl;
	node *head3=NULL;
	Merge_list(&head3,head1,head2);
	PrintList(head3);
}
