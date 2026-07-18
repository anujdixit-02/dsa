#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &s, int x){
  //basecase
  if(s.empty()){
    s.push(x);//x= element which we want to insert at bottom
    return;
  }

  int num = s.top();//store the top value 
  s.pop();

  solve(s,x);
  s.push(x);
}

stack<int> pushAtBottom(stack<int> &s ,int x){
  solve(s,x);
  return s;
}

