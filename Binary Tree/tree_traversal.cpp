// traversal binary tree

#include<iostream>
using namespace std;

class node{
	public:
		int data;
	node *left,*right;
};


void Preorder(node *root)
{
	if(root==NULL)
		return;
	cout<<root->data<<" ";
	Preorder(root->left);
	Preorder(root->right);
}

void Inorder(node *root)
{
	if(root==NULL)
		return ;
	Inorder(root->left);
	cout<<root->data<<" ";
	Inorder(root->right);
}

void Postorder(node *root)
{
	if(root==NULL)
		return ;
	Postorder(root->left);
	Postorder(root->right);
	cout<<root->data<<" ";
}

int main()
{
	node *root=new node();
	root->data=1;
	node *temp;
	temp=new node();
	temp->data=2;
	root->left=temp;
	temp=new node();
	temp->data=3;
	root->right=temp;
	temp=new node();
	temp->data=4;
	root->left->left=temp;
	temp=new node();
	temp->data=5;
	root->left->right=temp;
	temp=new node();
	temp->data=6;
	root->right->left=temp;
	temp=new node();
	temp->data=7;
	root->right->right=temp;
	
	cout<<"Pre order traversal"<<endl;
	Preorder(root);
	cout<<endl;
	cout<<"Inorder traversal"<<endl;
	Inorder(root);
	cout<<endl;
	cout<<"Post order traversal"<<endl;
	Postorder(root);
}

