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
node* solve(node* first,node* second){
  node* current1 = first;
  node* next1 = current1->next;
  node* current2 = second;
  node* next2 = current2->next;

  while(next1 != NULL && current2 != NULL){
   if((current2->data >= current1->data) && (current2->data <= next1->data)){
    current1->next = current2;
    next2 = current2->next;
    current2->next = next1;
    //update pointers
    current1 = current2;
    current2 = next2;
   }
   else{
    current1 = next1;
    next1 = next1->next;

    if(next1 == NULL){
      current1->next = current2;
    }
   }

  }
  return first;
}
node* mergeSortedLinkedList(node* &first,node* &second){
if(first == NULL){
  return second;
}
if(second == NULL){
  return first;
}

node* current = first;
node* previous = NULL;
node* temp = second;
if(first->data <= second->data){
 return solve(first,second);
}
else{
 return solve(second,first);
}
}

int main(){

    // First sorted linked list: 1 -> 4 -> 7
    node* first = new node(1);
    first->next = new node(4);
    first->next->next = new node(7);

    // Second sorted linked list: 2 -> 3 -> 6
    node* second = new node(2);
    second->next = new node(3);
    second->next->next = new node(6);

    // Merge
    node* mergedHead = mergeSortedLinkedList(first, second);

    // Print
    node* temp = mergedHead;

    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;

    return 0;
}