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
/*bool isPalindrom(vector<int> arr){
  int n = arr.size();
  int s = 0;
  int e = n-1;

  while(s<=e){
    if(arr[s] != arr[e]){
      return false;
    }
    s++;
    e--;
  }
  return true;
}
int main(){
node* head = new node(1);
vector<int> arr;
node* temp = head;

while(temp != NULL){
  arr.push_back(temp->data);
  temp = temp->next;
}
  return 0;
}
  */
 node* reverse(node* &head){
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
 node* getMid(node* &head){
  node* slow = head;
  node* fast = head->next;

  while(fast != NULL && fast->next != NULL){
    slow = slow->next;
    fast = fast->next->next;
  }
  return slow;
 }

 bool isPalindrome(node* &head){
  if(head == NULL && head->next == NULL){
    return true;
  }

  //find mid
  node* middle = getMid(head);

  //reverse list fter the middle element
  node* temp = middle->next;
  middle->next = reverse(temp);

  //campare both half
  node* head1 = head;
  node* head2 = middle->next;
  while(head2 != NULL){
    if(head1->data != head2->data){
      return false;
    }
    else{
      head1 = head1->next;
      head2 = head2->next;
    }
  }
  //get the original list
   middle->next = reverse(temp);
   return true;
 }