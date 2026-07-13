#include<iostream>
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

void sorted(node* &head){
  int zeroCount = 0;
  int oneCount = 0;
  int twoCount = 0;

  node* temp = head;
  while(temp != NULL){
    if(temp->data == 0){
      zeroCount++;
    }
    else if(temp->data == 1){
      oneCount++;
    }
    else if(temp->data == 2){
      twoCount++;
    }
    temp = temp->next;
  }

temp = head;
while(temp != NULL){
  if(zeroCount != 0){
    temp->data = 0;
    zeroCount--;
  }
    if(zeroCount != 0){
    temp->data = 1;
    oneCount--;
  }
    if(zeroCount != 0){
    temp->data = 2;
    twoCount--;
  }
}
}