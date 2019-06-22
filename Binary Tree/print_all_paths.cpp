// print all paths from root to all leaf nodes one by one

#include<iostream>
using namespace std;

class node{
	public:
		int data;
	node *left,*right;
};

void print_path(node *root,int i,char s[])
{
	if(root->left==NULL&&root->right==NULL)
	{
		s[i]=root->data+'0';
		s[i+1]='\0';
		cout<<s<<endl;
		return ;
	}
	
	s[i]=root->data+'0';
	if(root->left!=NULL)
		print_path(root->left,i+1,s);
	if(root->right!=NULL)
		print_path(root->right,i+1,s);
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
	
	char s[]="";
	print_path(root,0,s);	
}
