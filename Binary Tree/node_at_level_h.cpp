// print the nodes at a level =h

#include<iostream>
using namespace std;

class node{
	public:
		int data;
	node *left,*right;
};


void Node_at_h(node *root,int level)
{
	if(root==NULL)
		return;
	if(level==1)
	{
		cout<<root->data<<" ";
		return;
	}
	Node_at_h(root->left,level-1);
	Node_at_h(root->right,level-1);
}

int main()
{
	node *root=new node();
	root->data = 3;
	node *temp;
	temp=new node();
	temp->data=4;
	root->left=temp;
	temp=new node();
	temp->data=1;
	root->right=temp;
	temp=new node();
	temp->data=8;
	root->left->left=temp;
	temp=new node();
	temp->data=9;
	root->left->right=temp;
	
	int level;
	cin>>level;
	Node_at_h(root,level);
}
