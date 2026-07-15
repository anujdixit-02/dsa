#include<iostream>
#include<stack>
using namespace std;

int main(){
 stack<int> s;
  //push the element
  s.push(1);
 cout << " top element is : "<< s.top() << endl;
  s.push(2);
 cout << " top element is : "<< s.top() << endl;
  s.push(3);
 cout << " top element is : "<< s.top() << endl;
  s.push(4);
 cout << " top element is : "<< s.top() << endl;
  s.push(5);
 cout << " top element is : "<< s.top() << endl;
  s.push(6);
 cout << " top element is : "<< s.top() << endl;
  s.push(7);
 cout << " top element is : "<< s.top() << endl;
 // pop the element
  s.pop();
  cout << "pop element " << endl;
  //check is stack is empty or not
  if(s.empty()){
    cout << "stack is empty" << endl;
  }
  else{
    cout << "stack is not empty" << endl;
  }
 cout << " top element is : "<< s.top() << endl;
 cout << "the size of stack is : " << s.size() << endl;
return 0;
}