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

bool isCircular(node* head){
  if(head == NULL){
    return true;
  }
  node* temp = head->next;

  while(temp != NULL && temp != head){
    temp = temp->next;
  }
return temp == head;
}
int main(){
   node* head = new node(10);
    node* second = new node(20);
    node* third = new node(30);

    head->next = second;
    second->next = third;

    // Make circular
    third->next = head;

    if(isCircular(head)){
        cout << "Linked List is Circular";
    }
    else{
        cout << "Linked List is not Circular";
    }
  return 0;
}