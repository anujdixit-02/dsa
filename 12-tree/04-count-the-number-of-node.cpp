#include<iostream>
#include<queue>
using namespace std;

class node{
  public:
int data;
node* left;
node* right;

node(int d){
  this->data = d;
  this->right = NULL;
  this->left = NULL;
}

};

int countNode(node* root){
  //base case
  if(root == NULL){
    return 0;
  }
  int count = 0;
  queue<node*> q;
  q.push(root);


  while(!q.empty()){
  node* temp = q.front();
  q.pop();
  count++;

  if(temp->left != NULL){
    q.push(temp->left);
  }

  if(temp->right != NULL){
    q.push(temp->right);
  }
}
return count;
}

int main(){
  node* root = new node(1);
   root->left = new node(2);
   root->right = new node(3);

   root->left->left = new node(4);
   root->left->right = new node(5);

   root->right->left = new node(6);

   cout << "Number of node : " << countNode(root);
  return 0;
}