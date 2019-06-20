/*print left view of a binary tree

					1
				/     \
			   2       3
			   \     /   \
			   4    5     6
			   			/
			   		   7
*/

#include<iostream>
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

void print_level(node *root,int level, int *c)
{
	if(root==NULL)
		return;
	if(level==1)
	{
		if(*c==0)
		{
			cout<<root->data<<endl;
			*c=1;	
		}
		return;
	}
	print_level(root->left,level-1,c);
	print_level(root->right,level-1,c);
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
	root->left->right=temp;
	
	temp=new node();
	temp->data=5;
	root->right->left=temp;
	
	temp=new node();
	temp->data=6;
	root->right->right=temp;
	
	temp=new node();
	temp->data=7;
	root->right->right->left=temp;
	
	int h=height(root);
	int c;
	for(int i=1;i<=h;i++)
	{
		c=0;
		print_level(root,i,&c);
	}
}
