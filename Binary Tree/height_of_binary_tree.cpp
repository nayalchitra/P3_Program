// height of a binary tree

#include<iostream>
using namespace std;

class node{
	public:
	int data;
	node *left,*right;
};


int height (node * root)
{
	if(root==NULL)
		return 0;
	return (max(height(root->left), height(root->right))+1);
}

int main()
{
	node *root=NULL;
	root=new node();
	root->data=5;
	node *temp;
	temp=new node();
	temp->data=15;
	root->left=temp;
	node *p;
	p=new node();
	p->data=21;
	root->left->left=p;
	
	cout<<height(root);
}
