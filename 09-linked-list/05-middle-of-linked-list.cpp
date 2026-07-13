#include<iostream>
using namespace std;
class node{
  public:
  int data;
  node* next;

  node(int data){
    this->data = data;
    this->next = NULL;
  }
};
int getLen(node* &head){
  node* temp = head;
  int count = 0;
  while(temp != NULL){
    count++;
    temp = temp->next;
  }
  return count;
}

void insertAtHead(node* &head,int data){
  node* temp = new node(data);
  temp->next = head;
  head = temp;
}
//approach 1
int middleLinkedList(node* head){
    int len = getLen(head);
    int middlePosition = len / 2;

    node* temp = head;

    for(int i = 0; i < middlePosition; i++){
        temp = temp->next;
    }

    return temp->data;
}
//approach 2
int middleElement(node* &head){
  node* slow = head;
  node* fast = head;

  while(fast != NULL && fast->next != NULL){
    slow = slow->next;
    fast = fast->next->next;
  }
  return slow->data;
}

void printLL(node* &head){
  node* temp = head;
  while(temp != NULL){
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << endl;
}
int main(){
  node* head = new node(1);
  insertAtHead(head,10);
  insertAtHead(head,20);
  insertAtHead(head,30);
  insertAtHead(head,40);
  insertAtHead(head,50);
  insertAtHead(head,60);
  insertAtHead(head,70);
  insertAtHead(head,80);
  

  printLL(head);
  cout << "The middle element is : " << middleElement(head) << endl;
  cout << "The middle element is : " << middleLinkedList(head);
  return 0;
}

