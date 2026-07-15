#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int> s, int count, int size){
  //find middle element
  if(count == size/2);
  s.pop();
  return;

  //store the top element
  int element = s.top();
  s.pop();
  
  //recursive call
  solve(s,count+1,size);

  //push remaining element
  s.push(element);

}

void deleteMiddle(stack<int> s){
  int count = 0;
  int size = s.size();

  solve(s,count,size);
}
int main(){

return 0;
}