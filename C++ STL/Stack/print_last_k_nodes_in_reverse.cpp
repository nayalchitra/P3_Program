// print the last k nodes of a linked list in reverse order

#include<iostream>
#include<stack>
using namespace std;

class node{
	public:
		int data;
	node *next;
};


void Display_linkedlist(node *head)
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
		*head=temp;
		temp->next=NULL;
		return;
	}
	temp->next=(*head);
	(*head)=temp;	
}

void stack_insertion(node *head,int k)
{
	node *temp= head;
	stack<node *>stk;
	while(temp->next!=NULL)
	{
		stk.push(temp);
		temp=temp->next;
	}
	head=temp;
	cout<<temp->data<<" ";
	k--;
	while(k && !stk.empty())
	{
		cout<<(stk.top())->data<<" ";
		stk.pop();
		k--;
	}
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
	Display_linkedlist(head);
	int k;
	cin>>k;
	stack_insertion(head,k);
}
