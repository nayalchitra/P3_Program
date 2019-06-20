// check whether two binary trees are identical 

#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node *left,*right;
};


bool compare_binary_trees(node *root,node *head)
{
	if(root == NULL && head==NULL)
		return true;
	if(root ==NULL ||head==NULL)
		return false;
	if(root->data == head->data)
	{
		return (compare_binary_trees(root->left, head->left) && compare_binary_trees(root->right,head->right));
	}
	return false;
}

int main()
{
	node *root=new node();
	root->data = 1;
	node *temp;
	temp=new node();
	temp->data=2;
	root->left=temp;
	temp=new node();
	temp->data=3;
	root->right = temp;
	temp=new node();
	temp->data=4;
	root->left->left = temp;
	temp=new node();
	temp->data=5;
	root->left->right=temp;
	root->left->right->left=NULL;
	root->left->right->right=NULL;
	
	node *head = new node();
	head->data = 1;
	temp=new node();
	temp->data= 2;
	head->left = temp;
	temp=new node();
	temp->data = 3;
	head->right=temp;
	temp=new node();
	temp->data=4;
	head->left->left= temp;
	temp=new node();
	temp->data=5;
	head->left->right=temp;
	head->left->right->left=NULL;
	head->left->right->right=NULL;
	
	if(compare_binary_trees(root,head))
		cout<<"Yes";
	else
		cout<<"No";
}
