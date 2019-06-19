
// count leaf nodes

#include<iostream>
using namespace std;

class node{
	public:
		int data;
	node *left,*right;
};

int count_leaf(node *root)
{
	if(root==NULL)
		return 0;
	if(root->left==NULL && root->right==NULL)
		return 1;
	return count_leaf(root->left) + count_leaf(root->right);
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
	root->right=p;
	node *q;
	q=new node();
	q->data=7;
	root->right->right=q;
	
	cout<<count_leaf(root);
}
