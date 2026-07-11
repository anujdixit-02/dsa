#include<iostream>
using namespace std;
class node {
  public:
  int data;
  node* previous;
  node* next;

  //constructor
  node(int data){
    this->data = data;
    this->next = NULL;
    this->previous = NULL;
  }
  //destructor
  
};

void printLinkedList(node* head){
  node* temp = head;
  while(temp != NULL){
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int main(){
  node* head = new node(10);
  printLinkedList(head);
  return 0;
}