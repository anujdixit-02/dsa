#include<iostream>
#include<queue>
#include<stack>
using namespace std;

queue<int> reverseKelement(queue<int> q,int k){
  stack<int> s;
  //put the element in stack 
  for(int i = 0; i<k; i++){
    int value = q.front();
    q.pop();
    s.push(value);
  }
  // reverse the k element ans push_back to queue
  while(!s.empty()){
  int top = s.top();
  s.pop();
  q.push(top);
  }
  //remaining element
  int remain = q.size()-k;
  while(remain != 0){
    int value = q.front();
    q.pop();
    q.push(value);
    remain--;
  }
  return q;
}

int main(){
  queue<int> q;
  q.push(1); 
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);
  q.push(6);
  q.push(7);
  q.push(8); 
  int k = 3;
  q = reverseKelement(q, k);

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
  return 0;
}