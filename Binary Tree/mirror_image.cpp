//mirror image

#include<iostream>
using namespace std;

class node{
	public:
		int data;
	node *left, *right;
};

bool Mirror_image(node *root,node *head)
{
	if(root == NULL && head==NULL)
		return true;
	if(root ==NULL ||head==NULL)
		return false;
	if(root->data == head->data)
	{
		return (Mirror_image(root->left, head->right) && Mirror_image(root->right,head->left));
	}
	return false;
	
}

int main()
{
	node *root=new node();
	root->data=5;
	node *temp ;
	temp=new node();
	temp->data=7;
	root->left=temp;
	temp=new node();
	temp->data=10;
	root->right=temp;
	temp=new node();
	temp->data=15;
	root->left->left=temp;
	
	node *head=new node();
	head->data=5;
	temp=new node();
	temp->data=10;
	head->left=temp;
	temp=new node();
	temp->data=7;
	head->right=temp;
	temp=new node();
	temp->data=15;
	head->right->right=temp;
	if(Mirror_image(root,head))
		cout<<"Mirror image";
	else
		cout<<"Not mirror-image";
}
