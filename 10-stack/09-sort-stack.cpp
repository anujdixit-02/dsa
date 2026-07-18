#include<iostream>
#include<stack>
using namespace std; 

void Sort(stack<int> &s, int num){
//basecase
if(s.empty() || (!s.empty() && s.top()< num)){
s.push(num);
return;
}
//store the top to compare the num
int n = s.top();
//recursive call
Sort(s,num);
// push again the elements
s.push(num);
}
void sortedStack(stack<int> &s){
  if(s.empty()){
    return;
  }

  int num = s.top();

 //recursive call
 sortedStack(s);

 Sort(s,num);
}