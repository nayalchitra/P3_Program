/*
find Median in a sorted list
*/

#include<iostream>
using namespace std;


class node{
	public:
		int data;
	node *next;
};


void Median(node *head)
{
	node *p1=(head);
	node *p2=head;
	while(p2!=NULL &&p2->next!=NULL)
	{
		p1=p1->next;
		p2=p2->next->next;
	}
	cout<<p1->data;
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
	if(*head==NULL)
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
	int n,i,val;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>val;
		Insert(&head,val);	
	}
	PrintList(head);
	cout<<endl<<"median is : ";
	Median(head);
}
