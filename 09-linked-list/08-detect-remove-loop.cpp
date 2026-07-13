//detect and remove the loop in linked list 
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

bool detectLoop(node* &head){
if(head == NULL){
return false;
}
// using map key value pair
map<node*,bool>visited;

node* temp = head;

while(temp != NULL){
  //cycle present
  if(visited[temp] == true){
    return true;
  }
  visited[temp] = true;
  temp = temp->next;
}
return false;
}
node* loopLinkedList(node* &head){
  node* slow = head;
  node* fast = head;
  if(fast == NULL){
    return NULL;
  }
  // we do not write slow != fast coz it is always false
  while(fast != NULL && fast->next != NULL){
    slow = slow->next;
    fast = fast->next->next;

      if(slow == fast){
    return slow;
  }
  }
 return NULL;
}

node* getNode(node* &head){
  node* fast = loopLinkedList(head);
  if(fast == NULL){
    return NULL;
  }
node* slow = head;

while(slow != fast){
  slow = slow->next;
  fast = fast->next;
}
return slow;
}

//remove the loop
void removeLoop(node* &head){
node* start = getNode(head);

if(start == NULL){
  return;
}

node* temp = start;
while(temp->next != start){
  temp = temp->next;
}
temp->next = NULL; 
}
void printLinkedList(node* head){
    node* temp = head;

    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main(){
node* first = new node(1);
node* second = new node(2);
node* third = new node(3);
node* fourth = new node(4);
node* fifth = new node(5);
node* head = first;
first->next = second;
second->next = third;
third->next = fourth;
fourth->next = fifth;

// Create loop
fifth->next = third;

if(loopLinkedList(head)){
  cout << "cycle is present" <<endl;
}
else{
  cout << "cycle is not present" <<endl;
}
getNode(head);
removeLoop(head);
 
printLinkedList(head);
  return 0;
}