#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class node {
  public:
  int data;
  node* next;

  node(int data){
    this->data = data;
    this->next = NULL;
  }
};

//get mid
 node* getMid(node* &head){
  node* slow = head;
  node* fast = head->next;

  while(fast != NULL && fast->next != NULL){
    slow = slow->next;
    fast = fast->next->next;
  }
  return slow;
 }

 node* merge (node* left, node* right){
  if(left == NULL){
    return right;
  }

  if(right == NULL){
    return left;
  }
 //empty node
  node* ans = new node(-1);
  node* temp = ans;

  while(left != NULL && right != NULL){
    if(left->data < right->data){
      temp->next = left;
      temp = left;
      left = left->next;
    }
    else{
      temp->next = right;
      temp = right;
      right = right->next;
    }
  }

  //remaining nodes
  if(left != NULL){
    temp->next = left;
  }
  if(right != NULL){
    temp->next = right;
  }

  //store ans and delete the empty node
  node* result = ans->next;
  delete ans;

  return result;
 }

// Merge sort
node* mergeSort(node* head){

   // Base case
  if(head == NULL || head->next == NULL){
        return head;
    }

    //find middle element
    node* middle = getMid(head);

    //divide into two half
    node* left = head;
    node* right = middle->next;

    middle->next = NULL;

    //recursively sort
    left = mergeSort(left);
    right = mergeSort(right);

    //merge the sorted array
    return merge(left,right);
  }