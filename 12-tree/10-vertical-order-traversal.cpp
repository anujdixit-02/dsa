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

vector<int> verticalOrderTreversal(node* root){
  map<int,map<int, vector<int>>> nodes;
  //(node pointer, (Horizontal Distance, Level))
  queue<pair<node*,pair<int,int>>> q;

  vector<int> ans;

  if(root == NULL){
    return ans;
  }
    q.push(make_pair(root,make_pair(0,0)));

    while(!q.empty()){
      pair<node*,pair<int,int>> temp = q.front();
      q.pop();//Without q.pop(), the same root node remains at the front forever.


      /*temp
 ├── first  → node pointer
 │
 └── second → pair<int,int>
              ├── first  → HD
              └── second → Level*/
      node* frontNode = temp.first;
      int hd = temp.second.first;
      int level = temp.second.second;

      //store the current node's value in the correct vertical position.
      nodes[hd][level].push_back(frontNode->data);

      if(frontNode->left){
        q.push(make_pair(frontNode->left, make_pair(hd-1,level+1)));
      }

       if(frontNode->right){
        q.push(make_pair(frontNode->right, make_pair(hd+1,level+1)));
      }
    }
    /*First loop  → Go column by column (HD)
Second loop → Go level by level
Third loop  → Take all nodes at that position*/
      for(auto i: nodes){
        for(auto j: i.second){
          for(auto k: j.second){
            ans.push_back(k);
          }
        }
      }
      return ans;
    }
