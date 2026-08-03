#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

int countLeafNodes(Node* root){

    // Base case
    if(root == NULL){
        return 0;
    }

    // Leaf node
    if(root->left == NULL && root->right == NULL){
        return 1;
    }

    // Count leaves in left and right subtrees
    return countLeafNodes(root->left) + countLeafNodes(root->right);
}

int main(){

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "Number of leaf nodes = " << countLeafNodes(root);

    return 0;
}
