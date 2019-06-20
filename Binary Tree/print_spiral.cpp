/* print in spiral form

					1
				/		\
			   2		  3
			  /  \	    /   \
			 4    5     6    7
			/ \  / \   /\    /  \
			8 9 10 11 12 13 14  15
			

output : 1 3 2 4 5 6 7 15 14 13 12 11 10 9 8

*/

#include<iostream>
using namespace std;

class node{
	public:
		int data;
	node *left,*right;
};


void print_level(node *root,int level)
{
	if(root==NULL)
		return ;
	if(level==1)
	{
		cout<<root->data<<" ";
		return; 
	}
	print_level(root->left,level-1);
	print_level(root->right,level-1);
}

void print_level_opposite(node *root,int level)
{
	if(root==NULL)
		return ;
	if(level==1)
	{
		cout<<root->data<<" ";
		return;
	}
	print_level_opposite(root->right,level-1);
	print_level_opposite(root->left,level-1); 
}

int height(node *root)
{
	if(root==NULL)
		return 0;
	return max(height(root->left),height(root->right) +1);
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
	
	int h=height(root);
	for(int i=1;i<=h;i++)
	{
		if(i%2!=0)
			print_level(root,i);
		else
			print_level_opposite(root,i);
	}
}
