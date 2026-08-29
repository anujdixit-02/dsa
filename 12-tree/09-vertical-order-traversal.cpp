#include<iostream>
#include<queue>
#include<vector>
#include<map>
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

vector<int> verticalOrder(node* root){
//or Vertical Order Traversal, we need the level to know the vertical position from top to bottom when multiple nodes have the same Horizontal Distance (HD).
    map<int, map<int, vector<int>>> nodes;
    queue<pair<node*, pair<int,int>>> q;//(node pointer, (HD, Level))
    vector<int> ans;

    if(root == NULL){
        return ans;
    }

    // root -> horizontal distance = 0, level = 0
    q.push(make_pair(root, make_pair(0, 0)));

    while(!q.empty()){

        pair<node*, pair<int,int>> temp = q.front();
        q.pop();

        node* frontNode = temp.first;

        int hd = temp.second.first;
        int level = temp.second.second;

        // Store node according to HD and level
        nodes[hd][level].push_back(frontNode->data);

        // Left child
        if(frontNode->left != NULL){
            q.push(make_pair(
                frontNode->left,
                make_pair(hd - 1, level + 1)
            ));
        }

        // Right child
        if(frontNode->right != NULL){
            q.push(make_pair(
                frontNode->right,
                make_pair(hd + 1, level + 1)
            ));
        }
    }

    // Convert map into answer
    for(auto i : nodes){

        for(auto j : i.second){

            for(auto k : j.second){

                ans.push_back(k);
            }
        }
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

    vector<int> ans = verticalOrder(root);

    cout << "Vertical Order Traversal: ";

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

    cout << endl;

    return 0;
}