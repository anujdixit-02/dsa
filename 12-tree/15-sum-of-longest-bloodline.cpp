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

void solve(node* root, int sum, int &maxSum, int len, int &maxlen){
//base condition
if(root == NULL){
  return;
}
if(root->left == NULL && root->right == NULL){

  if(len > maxlen){
    maxlen = len;
    maxSum = sum;
  }
  else if(len == maxlen){
    maxSum = max(sum,maxSum);
  }
  return;
}
sum += root->data;

solve(root->left,sum,maxSum,len+1,maxlen);
solve(root->right,sum,maxSum,len+1,maxlen);
}

int sumOfLongest(node* root){
  int len = 0;
  int maxlen = 0;
  int sum = 0;
  int maxSum = INT_MIN;

  solve(root,sum,maxSum,len,maxlen);

  return maxSum;

}