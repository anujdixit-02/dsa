#include<iostream>
using namespace std;
class node{
  public:
  int data;
  node* next;

//constructor
node(int data){
  this -> data = data;
  this -> next = NULL;
}

};

//Insertion at the beginning
void insertAtBeginning(node* &head, int data){
  //new node
   node* temp = new node(data);
   temp -> next = head;
   head = temp;
}

//Insertion at the tail
void insertAtTail(node* &tail, int data){
  //new node
   node* temp1 = new node(data);
   tail -> next = temp1;
   tail = temp1;
}

void insertAtPosition(node* &head, node* &tail,int position, int data){
  //insert at head
  if(position == 1){
    insertAtBeginning(head, data);
    return;
  }
  
  node* temp = head;
  int count = 1;
  while(count < position -1){
    temp = temp -> next;
    count++;
  }
  //creating new node
  node* node2 = new node(data);
  node2 ->next = temp ->next;
  temp ->next = node2;

  // insert at tail
  if(temp ->next == NULL){
    insertAtTail(tail,data);
    return;
  }

}

void deleteNode(int position, node* &head){
  //deleting start node
  if(position == 1){
    node* temp = head;
    head = head->next;
    delete temp;
  }
  //middle or last node
  else{
    node* current = head;
    node* previous = NULL;
    int count = 1;
    while(count < position){
    previous = current;
    current = current->next;
    count++; 
    }
    previous->next = current->next;
    delete current;
  }
}

void printLinkedList(node* &head){
 node* temp = head;
 while(temp != NULL){
  cout << temp ->data << " ";
  temp = temp ->next;

 }
  cout << endl;
}

int main(){
  node* node1 = new node(1); 
  node* head = node1;
  node* tail = node1;

  //insert at the head
 insertAtBeginning(head,10);
 printLinkedList(head);
  insertAtBeginning(head,9);
 printLinkedList(head);
  insertAtBeginning(head,8);
 printLinkedList(head);
  insertAtBeginning(head,7);
 printLinkedList(head);
  insertAtBeginning(head,6);
 printLinkedList(head);
  insertAtBeginning(head,5);
 printLinkedList(head);

 //insert at position
 insertAtPosition(head,tail,3,22);
 printLinkedList(head);

 //insert at the tail
 insertAtTail(tail,11);
 printLinkedList(head);
  insertAtTail(tail,12);
 printLinkedList(head);
  insertAtTail(tail,13);
 printLinkedList(head);
  insertAtTail(tail,14);
 printLinkedList(head);
  insertAtTail(tail,15);
 printLinkedList(head); insertAtTail(tail,16);
 printLinkedList(head);
//deleting the node
 deleteNode(1,head);
 printLinkedList(head);
  deleteNode(2,head);
 printLinkedList(head);
  deleteNode(3,head);
 printLinkedList(head);
 deleteNode(4,head);
 printLinkedList(head);
  deleteNode(5,head);
 printLinkedList(head);
 deleteNode(6,head);
 printLinkedList(head);
  deleteNode(7,head);
 printLinkedList(head);
  return 0;
}