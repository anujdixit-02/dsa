#include<iostream>
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


void traveseLeft(node* root, vector<int> &ans){

  //base case
  if(root == NULL){
  return;
  }
  if(root->left == NULL && root->right == NULL){
    return;
  }

  ans.push_back(root->data);
  if(root->left){
    traveseLeft(root->left,ans);
  }
  
  else{
    traveseLeft(root->right,ans);
  }
}

void traverseLeaf(node* root, vector<int> &ans){
  //base case
  if(root == NULL)
  return;

  if(root->left == NULL && root->right == NULL){
    ans.push_back(root->data);
    return;
  }
traverseLeaf(root->left,ans);
traverseLeaf(root->right,ans);
} 
void traverseRight(node* root,vector<int> &ans){
 if(root == NULL){
  return;
 }
  if(root->left == NULL && root ->right == NULL){
    return;
  }

  if(root->right){
    traverseRight(root->right,ans);
  }
  else{traverseRight(root->left,ans);}

  ans.push_back(root->data);

}
vector<int> boundary(node* root){
  vector<int> ans;
  if(root == NULL){
  return ans;
  }
  ans.push_back(root->data);

  //left part print ans store
  traveseLeft(root->left,ans);

  //traversal leaf node

  //left
  traverseLeaf(root->left,ans);

  //right
  traverseLeaf(root->right,ans);

  //traversalright
  traverseRight(root->right,ans);

  return ans;
}


int main(){

    node* root = new node(1);

    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

    root->left->right->left = new node(8);
    root->left->right->right = new node(9);

    root->right->right->right = new node(10);

    vector<int> ans = boundary(root);

    cout << "Boundary Traversal: ";

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

    cout << endl;

    return 0;
}