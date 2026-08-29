#include<iostream>
#include<map>
#include<queue>
#include<vector>
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

void solve(node*root,vector<int> &ans,int level){
  //base case 
  if(root == NULL){
    return ;
  }
//tell how many node present in the level.
  if (level == ans.size()){
    ans.push_back(root->data);
  }

  solve(root->left,ans,level+1);
  solve(root->right,ans,level+1);
}

vector<int> leftView(node* root){
  vector<int> ans;
  solve(root,ans,0);
  return ans;
}