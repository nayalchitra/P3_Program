/*
sum of the nodes in a linked list which are greater than its next node
*/

#include<iostream>
using namespace std;

class node{
	public:
		int data;
	node *next;
};

void Sum(node *head)
{
	int sum=0;
	node *temp=head;
	int p=temp->data;
	while(temp->next!=NULL)
	{
		if((temp->data)>((temp->next)->data))
			sum+=temp->data;
		temp=temp->next;
	}
	if((temp->data)>p)
		sum+=temp->data;
	cout<<sum;
	
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
//	Insert(&head,8);
//	Insert(&head,6);
//	Insert(&head,4);
//	Insert(&head,5);
//	Insert(&head,3);
//	Insert(&head,2);
//	Insert(&head,9);
	Insert(&head,7);
	Insert(&head,5);
	Insert(&head,1);
	Insert(&head,2);
	PrintList(head);
	cout<<endl;
	Sum(head);
	
}
