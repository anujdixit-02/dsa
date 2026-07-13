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

void reverseLL(node* &head, node* current, node* previous){
  //base case
  if(current == NULL){
    head = previous;
    return;
  }
  node * forward = current->next;
  reverseLL(head,forward,current);

  //ek case solve karna hai
  current->next = previous;

}
 
void reverseLinkedList(node*&head){
node* current = head;
node* previous = NULL;
reverseLL(head,current,previous);
/*node* current = head;
node* previous = NULL;
node* forward = NULL;

if(head == NULL || head->next == NULL){
  head;
}
while(current != NULL){
  forward = current ->next;
  current->next = previous;
  previous = current;
  current = forward;
  head = previous;
}*/
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
reverseLinkedList(head);
printLinkedList(head);
  return 0;
}