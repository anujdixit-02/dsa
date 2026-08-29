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
//The top view contains the nodes that are visible when we look at the tree from above.

vector<int> topView(node*root){
  vector<int> ans;

  if(root == NULL){
    return ans;
  }
//map<int(HD),int(node data)>
  map<int,int> topNode;
// make pair of node or HD :(node pointer, Horizontal Distance)
  queue<pair<node*,int>> q;

  q.push(make_pair(root,0));

  while(!q.empty()){
    pair<node*,int> temp = q.front();
    q.pop();
    node* frontNode = temp.first;
    int hd = temp.second;
//store only the first node at each HD
    if(topNode.find(hd)==topNode.end()){//HD has not been stored yet
      topNode[hd] = frontNode->data;
    }
    if(frontNode->left){
      q.push(make_pair(frontNode->left,hd-1));
    }

    if(frontNode->right){
      q.push(make_pair(frontNode->right,hd+1));
    }
  }
  for(auto i:topNode){//i = (-2(HD), 4(node data))
    ans.push_back(i.second);
  }
  return ans;
}
