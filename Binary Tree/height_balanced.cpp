// check if a binary tree is height balanced 

#include<iostream>
#include<math.h>
using namespace std;

class node{
	public:
		int data;
	node *left,*right;
};

int height(node *root)
{
	if(root==NULL)
		return 0;
	return (max(height(root->left),height(root->right)) +1);
}

bool isbalanced(node *root)
{
	if(root==NULL)
		return true;
	int left_h=height(root->left);
	int right_h=height(root->right);
	if((abs(left_h - right_h)<=1) && isbalanced(root->left) && isbalanced(root->right))
		return true;
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
	root->left->left->right=temp;
	//temp=new node();
	//temp->data=7;
	//root->right->right=temp;
	
	if(isbalanced(root))	
		cout<<"Yes";
	else
		cout<<"No";
}
