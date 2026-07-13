#include<iostream>
#include<vector>
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

node* reverseKGroup(node* head,int k){
  if(head == NULL){
    return NULL;
  }
  node* current = head;
  node* previous = NULL;
  node* forward = NULL;

  int count = 0;
  //reverse first k node
  while(current != NULL && count < k){
    forward = current ->next;
    current ->next = previous;
    previous = current;
    current = forward;

    count++;
  }
  //connect the remaining reverse list
  if(current != NULL){
    head ->next = reverseKGroup(current,k);
  }
  return previous;
}

void insertAtHead(node* &head, int data){
  node* temp = new node(data);
  temp->next = head;
  head = temp; 
}

void printLinkedList(node* &head){
  node* temp = head;
  while(temp != NULL){
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout<<endl;
}

int main(){
node* node1 = new node(1);
node* head = node1;
insertAtHead(head,11);
insertAtHead(head,12);
insertAtHead(head,13);
insertAtHead(head,14);
insertAtHead(head,15);
insertAtHead(head,16);
printLinkedList(head);
//function returns the new head of the reversed list
head = reverseKGroup(head,2);
printLinkedList(head);
  return 0;
}