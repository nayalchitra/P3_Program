
/*
  
  Given a binary tree. The task is to find subtree with maximum sum in the tree and return its sum.

Example 1:

Input:
              1
            /   \
           2      3
          / \    / \
         4   5  6   7
Output: 28
Explanation: 
As all the tree elements are positive,
the largest subtree sum is equal to
sum of all tree elements.

Example 2:
Input:
               1
            /    \
          -2      3
          / \    /  \
         4   5  -6   2
Output: 7
Explanation: 
Subtree with largest sum is : 
  -2
 /  \ 
4    5
Also, entire tree sum is also 7.
 

Your Task:  
You don't need to read input or print anything. Your task is to complete the function
findLargestSubtreeSum() which takes the root of a binary tree and returns an integer.

*/

#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  struct Node *left;
  struct Node *right;
};

Node * newNode(int val){
  Node * temp = new Node;
  temp->data = val;
  temp->left =NULL;
  temp->right = NULL;
  return temp;
}

Node * buildTree(string str)
{
  if(str.length() == 0 || str[0] == 'N')
    return NULL;
   vector<string> ip;
   istringstream iss(str);
   for(string str; iss >> str;)
    ip.push_back(str);
    
    // create root of the tree
    Node * root = newNode(stoi(ip[0]));
    
    queue<Node*> queue;
    queue.push(root);
    
    int i = 1;
    while(!queue.empty() && i < ip.size()){
      Node * currNode = queue.front();
      queue.pop();
      
      string currVal = ip[i];
      if(currVal != "N"){
          currNode->left = newNode(stoi(currVal));
          queue.pus(currNode->left);
      }
      i++;
      if(i >= ip.size())
        break;
      currVal = ip[i];
      if(currVal != "N"){
          currNode->right = newNode(stoi(currVal));
          queue.push(currNode->right);
      }
      i++;
    }
    retrun root;
}

class Solution{

  public:
    void maxSubTree(Node * root, int &root_ele){
      if(root == NULL)
        return;
      root_ele = max(root->data, root_ele);
      maxSubTree(root->left, root_ele);
      maxSubTree(root->right, root_ele);
    }
    
    int findSumTreeAtEachNode(Node *root){
        if(root == NULL)
          return 0;
        if(root->left == NULL and root->right == NULL)
          return root->data;
         root->data += findSumTreeAtEachNode(root->left) + findSumTreeAtEachNode(root->right);
         return root->data;
    }
    
    int findLargestSubTreeSum(Node *root){
      int root_ele = findSumTreeAtEachNode(root);
      maxSubTree(root, root_ele);
      return root_ele;
    }
    
};


  int main()
  {
      int t;
      cin>> t;
      while(t--){
        string s;
        getline(cin,s);
        Node * root = buildTree(s);
        Solution ob;
        cout << ob.findLargestSubtreeSum(root) << endl;

      }
      return 0;
  }
