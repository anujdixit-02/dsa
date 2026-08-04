/*
Recursive Steps

For every node:

Find the height of the left subtree.
Find the height of the right subtree.
Take the maximum of the two.
Add 1 for the current node.
Return the result.
*/
#include<iostream>
using namespace std;
class node{
  public:
int data;
node* left;
node* right;

node(int d){
  this->data = d;
  this->left = NULL;
  this->right = NULL;
}
};
int hightBinaryTree(node* root){
//base case
if(root == NULL){
  return 0;
}

int leftHight = hightBinaryTree(root->left);

int rightHight = hightBinaryTree(root->right);
return 1+max(leftHight,rightHight);
}

int main(){
 node* root = new node(1);

    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->right = new node(6);

    cout << "Height of Tree = " << hightBinaryTree(root) << endl;

  return 0;
}