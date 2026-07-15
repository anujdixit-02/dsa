#include<iostream>
#include<stack>
using namespace std;
bool isValid(string expression){
  stack<char> s;

  for(int i =0; i<expression.size(); i++){
    char ch = expression[i];
    //open brackets = push
    //close brackets = pop

    if(ch == '(' || ch == '{' || ch == '['){
      s.push(ch);
    }
    else{
      char top = s.top();
    }
  }
}