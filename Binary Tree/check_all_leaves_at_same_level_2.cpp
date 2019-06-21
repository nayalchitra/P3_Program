// check if all leaves of the tree are at the same level

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
	if(root->left==NULL  && root->right==NULL)
		return 1;
	return count_leaf(root->left) + count_leaf(root->right);
}


int nodes_at_h(node *root,int h)
{
	if(root==NULL)
		return 0;
	if(h==1 && (root->left==NULL  && root->right==NULL))
		return 1;
	return nodes_at_h(root->left,h-1) + nodes_at_h(root->right,h-1);
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
	temp= new node();
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
	
	int leaf_nodes = count_leaf(root);
	cout<<"leaf nodes : ";
	cout<<leaf_nodes<<endl;	
	
	int h = height(root);
	cout<<"height of the tree : ";
	cout<<h<<endl;
	
	int l_nodes = nodes_at_h(root,h);
	cout<<"leaf nodes at level "<<h<<" : ";
	cout<<l_nodes<<endl;
	
	if(leaf_nodes==l_nodes)
		cout<<"same level";
	else
		cout<<"Not same level";	

}
