// print in spiral form using stack/queue

#include<iostream>
#include<stack>
#include<queue>
using namespace std;

class node{
	public:
		int data;
	node *left,*right;
};

void print_tree(node *root)
{
	
	if (root == NULL) 
        return; 
  

    queue< node*> q; // For levels to be printed from right to left 
    stack< node*> stk; // For levels to be printed from left to right 
  
    // Push first level to first stack 's1' 
    q.push(root); 
  
    // Keep printing while any of the stacks has some nodes 
    while (!q.empty() || !stk.empty()) { 
        // Print nodes of current level from s1 and push nodes of 
        // next level to s2 
        while (!q.empty()) { 
            node* temp = q.front(); 
            q.pop(); 
            cout << temp->data << " "; 
  
            // Note that is right is pushed before left 
            if (temp->right) 
                stk.push(temp->right); 
            if (temp->left) 
                stk.push(temp->left); 
        } 
  
        // Print nodes of current level from s2 and push nodes of 
        // next level to s1 
        while (!stk.empty()) { 
            node* temp = stk.top(); 
            stk.pop(); 
            cout << temp->data << " "; 
  
            // Note that is left is pushed before right 
            if (temp->left) 
                q.push(temp->left); 
                
            if (temp->right) 
                q.push(temp->right); 
        } 
    } 
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
	
	print_tree(root);
}
