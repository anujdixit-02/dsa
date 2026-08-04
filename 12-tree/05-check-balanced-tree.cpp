#include<iostream>
#include<cmath>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;

    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

// Function to find height
int height(node* root){

    if(root == NULL){
        return 0;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return 1 + max(leftHeight, rightHeight);
}
bool checkBalanceTree(node* root){
  //base case
if(root == NULL){
  return true;
}

bool l = checkBalanceTree(root->left);

bool r = checkBalanceTree(root->right);

    // Find heights
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

bool diff = abs(leftHeight - rightHeight) <=1;

return left && right && diff;
}

int main(){
  node* root = new node(1);
   root->left = new node(2);
   root->right = new node(3);

   root->left->left = new node(4);
   root->left->right = new node(5);

   root->right->left = new node(6);

   cout << "tree is balanced or not : " << checkBalanceTree(root);

       if(checkBalanceTree(root)){
        cout << "Tree is Balanced";
    }
    else{
        cout << "Tree is Not Balanced";
    }
   return 0;
}