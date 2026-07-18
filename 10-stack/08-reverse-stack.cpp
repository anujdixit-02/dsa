#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom (stack<int> &s, int x){
  //basecase
  if(s.empty()){
    s.push(x);//x= element which we want to insert at bottom
    return;
  }

  int num = s.top();//store the top value 
  s.pop();

 insertAtBottom(s,x);
  s.push(x);
}

void reverseStack(stack<int> &s){
  if(s.empty()){
    return;
  }

  int num = s.top();

 //recursive call
 reverseStack(s);

 insertAtBottom(s,num);
}