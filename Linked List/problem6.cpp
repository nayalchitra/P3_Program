// Convert singly linked list into circular linked list

#include<iostream>
using namespace std;

class node{
	public:
		int data;
	node *next;
};


void Circular_List(node **head)
{
	node *temp = (*head);
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=(*head);
}

void PrintList(node *head)
{
	node *temp=head;
	while(temp->next!=head)
	{
		cout<<(temp->data)<<" ";
		temp=temp->next;
	}
	cout<<temp->data;
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
	Circular_List(&head);
	PrintList(head);
	
}
