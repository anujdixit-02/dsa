#include<iostream>
#include<queue>
using namespace std;

class node {
  public:
  int data;
  node* left;
  node* right;

  node(int data){
    this->data = data;
    this->left = NULL;
    this->right = NULL;
  }
};

node* buildTree(node* root){
  int d;
  cout <<"Enter the data : ";
  cin>>d;

  root = new node(d);

  if(d == -1){
    return NULL;
  }

  //insert at left
  cout << "insert at left" <<d<< endl;
  root ->left = buildTree(root->left);

  cout << "insert at right" << d <<endl;
  root->right = buildTree(root->right);

  return root;
}

//level order treversal
void levelOrderTreversal(node* root){
queue<node*> q;
q.push(root);
q.push(NULL);

while(!q.empty()){
  node* temp = q.front();
  q.pop();

  if(temp == NULL){
    cout << endl;


    if(!q.empty()){
      q.push(NULL);
    }
  }
  else{
    if(temp->left){
      q.push(temp->left);
    }

        if(temp->right){
      q.push(temp->right);
    }
  }
}
}

//inorder treversal
void inorder(node* root){
  if(root == NULL){
    return;
  }
//left -> node -> right
  inorder(root->left);
  cout<< root->data << " ";
  inorder(root->right);
}

void preorder(node* root){
  if(root == NULL){
    return;
  }
//node -> left ->right
  cout<< root->data << " ";
  preorder(root->left);
  preorder(root->right);
}

void postorder(node* root){
  if(root == NULL){
    return;
  }
//left -> right -> node
  postorder(root->left);
  postorder(root->right);
  cout<< root->data << " ";
}

void buildBylevelOrder(node* &root){
  queue<node*> q;
  cout << "Enter the data";
  int d1;
  cin >> d1;
  root = new node(d1);
  q.push(root);

  while(!q.empty()){
    node* temp = q.front();
    q.pop();

    cout <<"Enter the left node for " << temp->data << endl;
    int leftData;
    cin >> leftData;
    

    if(leftData != -1){
      temp ->left = new node (leftData);
      q.push(temp->left);
    }

        cout <<"Enter the Right node for " << temp->data << endl;
    int RightData;
    cin >> RightData;
    

    if(RightData != -1){
      temp ->right = new node (RightData);
      q.push(temp->right);
    }


  }
}

int main(){
  node* root = NULL;

  //create a tree 
  root = buildTree(root);

//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
  //levelorder
  levelOrderTreversal(root);
  return 0;
}