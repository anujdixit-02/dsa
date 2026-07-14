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

//reverse input linkedlist

node* reverse (node* &head){
  node* previous = NULL;
  node* current = head;
  node* temp = current->next;

  while(current != NULL){
    temp = current->next;
    current->next = previous;
    previous = current;
    current = temp;
  }
  return head = previous;
}

void insertAtTail(node* head,node* tail,int value){
  node* temp = new node(value);
  //empty list 
  if(head == NULL){
    head = temp;
    tail = temp;
    return;
  }
  else{
    tail->next = temp;
    tail = temp;
  }
}
// add two ll
node* addLL(node* &first, node* &second){
int carry = 0;
node* ansHead = NULL;
node* ansTail = NULL;

while(first != NULL || second != NULL || carry != 0){

  int value1 = 0;
  if(first != NULL){
    value1 = first->data;
  }

  int value2 = 0;
  if(second != NULL){
    value1 = second->data;
  }
  int sum = carry+value1+value2;

  int digit = sum%10;
  //create a node in ans linkedlist
  insertAtTail(ansHead,ansTail,digit);

  //carry 
  carry = sum/10;
  if(first != NULL){
    first = first->next;
  }
  if(second != NULL){
    second = second->next;
  }
}
return ansHead;
}

//function add 2 number represented by linkedlist

node* addTwo(node* first, node* second){
  //reverse the linkedlist 
  first = reverse(first);
  second = reverse(second);

  //add 2 ll
  node* ans = addLL(first,second);

  //reverse the ans 
  ans = reverse(ans);
}