// sum of all nodes

#include<iostream>
using namespace std;

class node{
	public:
		int data;
	node *left,*right;
};


int sum_data(node *root)
{
	static int sum =0;
	if(root==NULL)
		return 0;
	return (sum_data(root->left)+ sum_data(root->right)+root->data);
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
	
	cout<<sum_data(root);
}
