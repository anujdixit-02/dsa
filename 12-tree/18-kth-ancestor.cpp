#include<iostream>
#include<map>
#include<queue>
#include<vector>
#include<climits>
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

node* solve(node* root, int &k, int nodes){
  if(root == NULL){
    return NULL;
  }
  if(root->data == nodes){
    return root;
  }

  node* leftAns = solve(root->left,k,nodes);
  node* rightAns = solve(root->right,k,nodes);

  // Target found below the current node
  if(leftAns != NULL || rightAns != NULL){

   k--;

  // K-th ancestor found
  if(k == 0){
      k = INT_MAX; // Lock the answer
       return root;
        }

  if(leftAns != NULL && rightAns == NULL){
    k--;
    if(k==0){
      k= INT_MAX;//ans lock
      return root;
    }
    return leftAns;
  }

    if(leftAns == NULL && rightAns != NULL){
    k--;
    if(k==0){
      k= INT_MAX;//ans lock
      return root;
    }
    return rightAns;
  }
  return NULL;
}
}

int kthAncestor(node* root, int k, int nodes){
  node* ans = solve(root,k,nodes);

  if(ans==NULL||root->data == nodes){
    return -1;
  }

  else{
    return ans->data;
  }
}
