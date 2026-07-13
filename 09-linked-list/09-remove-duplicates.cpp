#include<iostream>
#include<map>
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

//sorted linkedlist

void removeDuplicatesSorted(node* &head){
  node* current = head;
  while(current != NULL && current->next != NULL){
    if(current->data == current->next->data){
      node* temp = current->next;
      current->next = temp ->next;
      delete temp;
    }
    else{
      current = current->next;
    }
  }
}

//unsorted linkedlist
void removeDuplicatesUnsorted(node* &head){
  node* current = head;
  while(current != NULL){
    //current move
    node* previous = current;
    node* temp = current->next;
    while(temp != NULL){
      if(temp->data == current->data){
        //ability to reconnect the list
        previous->next = temp->next;
        node* duplicate = temp;
        temp = temp->next;
        delete duplicate;
      }

    }
  }
}
/*using map
void removeDuplicatesUnsorted(node* &head){

    map<int, bool> visited;

    node* current = head;
    node* previous = NULL;

    while(current != NULL){

        // Duplicate found
        if(visited[current->data] == true){

            previous->next = current->next;

            node* duplicate = current;
            current = current->next;

            delete duplicate;
        }
        else{
            // First occurrence
            visited[current->data] = true;

            previous = current;
            current = current->next;
        }
    }
}
*/
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

void printLinkedList(node* &head){
 node* temp = head;
 while(temp != NULL){
  cout << temp ->data << "->";
  temp = temp ->next;

 }
  cout <<"NULL"<< endl;
}


int main(){
  node* node1 = new node(1); 
  node* head = node1;
  node* tail = node1;

  //insert at the head
 insertAtBeginning(head,10);
 printLinkedList(head);
  insertAtBeginning(head,10);
 printLinkedList(head);
  insertAtBeginning(head,9);
 printLinkedList(head);
  insertAtBeginning(head,9);
 printLinkedList(head);
  insertAtBeginning(head,6);
 printLinkedList(head);
  insertAtBeginning(head,5);
 printLinkedList(head);
  insertAtBeginning(head,5);
 printLinkedList(head);
 insertAtBeginning(head,5);
 printLinkedList(head);
 removeDuplicatesSorted(head);
 printLinkedList(head);
}