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
 
  
};

void insertAtHead(node* &head, int data){
  node* node1 = new node(data);
  node1->next = head;
  head->previous = node1;
  head = node1;
}

void insertAtTail(node* &tail,int data){
  node* temp = new node(data);
  tail->next = temp;
  temp->previous = tail;
  tail = temp;

}

void insertAtPosition(node* &head, node* &tail,int position, int data){
  if(position == 1){
    insertAtHead(head,data);
    return;
  }

    node* temp = head;
    int count = 1;
    while(count < position-1){
      temp = temp->next;
      count++;
    }
    node* node2 = new node(data);
    node2->next = temp->next;
    node2->previous = temp;
    temp->next->previous = node2;
    temp->next = node2;

      if(temp ->next == NULL){
    insertAtTail(tail,data);
    return;
  }
  }

  //deleting the node
  void deleteNode(int position, node* &head){
  //deleting start node
  if(position == 1){
    node* temp = head;
    head = head->next;
    if(head != NULL){
    head->previous = NULL;
    }
    delete temp;
  }
  else{
    node* current = head;
    //node* previous = NULL;
    int count = 1;
    while(count < position){
   // previous = current;
    current = current->next;
    count++; 
    }
    current ->previous->next = current->next;
    if(current->next != NULL)
    current->next->previous = current->previous;
    delete current;
  }
}


void printLinkedList(node* head){
  node* temp = head;
  while(temp != NULL){
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int getLen(node* head){
    node* temp = head;
    int len = 0;
  while(temp != NULL){
    len++;
    temp = temp->next;
  }
  return len;
}

int main(){
  node* node1 = new node(10);
  node* head = node1;
  node* tail = node1;
  insertAtHead(head,11);   
  printLinkedList(head);
  insertAtTail(tail,2);
  printLinkedList(head);
deleteNode(2,head);
printLinkedList(head);
  insertAtPosition(head,tail,2,9);
  printLinkedList(head);
  cout << "Lenght of the list : " << getLen(head);
  return 0;
}