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

vector<int> spiralTraversal(node* root){
vector<int> ans;

queue<node*> q;
q.push(root);

bool leftToRight = true;


while(!q.empty()){
  int size = q.size();
  vector<int> temp(size);

  for(int i = 0; i<size; i++){
    node* frontNode = q.front();
    q.pop();

    int index = leftToRight ? i : size-i-1;

    temp[index] = frontNode->data;

    if(frontNode->left != NULL){
      q.push(frontNode->left);
    }

    if(frontNode->right != NULL){
      q.push(frontNode->right);
    }
  }
    for(int i=0; i<size; i++){
      ans.push_back(temp[i]);
    
  }
  leftToRight != leftToRight;
}
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

    vector<int> ans = spiralTraversal(root);

    cout << "Spiral Traversal: ";

    for(int x : ans){
        cout << x << " ";
    }
  return 0;
}