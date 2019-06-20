// print level order traversal without using queue

#include<iostream>
using namespace std;

class node{
	public:
		int data;
	node *left,*right;
};

void Printlevel(node *root,int level)
{
	if(root==NULL)
		return ;
	if(level==1)
	{
		cout<<root->data<<" ";
		return;
	}

	Printlevel(root->left,level-1);
	Printlevel(root->right,level-1);
}

int height(node *root)
{
	if(root==NULL)
		return 0;
	return (max(height(root->left),height(root->right))+1);
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
	root->right->left=temp;
	temp=new node();
	temp->data=6;
	root->right->right=temp;
	
	int h=height(root);	
	cout<<h<<endl;;
	for(int i=1;i<=h;i++)
		Printlevel(root,i);
}
