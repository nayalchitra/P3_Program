// check if all leaves of the tree are at the same level

#include<iostream>
using namespace std;

class node{
	public:
		int data;
	node *left,*right;
};

int height_l(node *root)
{
	if(root==NULL)
		return 0;
	return (height_l(root->left)+1);
}

bool check_level(node *root)
{
	if(root==NULL)
		return true;
	if(height_l(root->left)==height_l(root->right))
	{
		return (check_level(root->left) && check_level(root->right));
	}
	return false;
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
	root->left->left->left=temp;
	temp=new node();
	temp->data=6;
	root->right->left=temp;
	temp=new node();
	temp->data=7;
	root->right->right=temp;
	temp=new node();
	temp->data=8;
	root->right->right->right=temp;
	//temp=new node();
	//temp->data=9;
	//root->right->left->left=temp; 
	
	if(check_level(root))
		cout<<"same level";
	else
		cout<<"not same level";
	
}
