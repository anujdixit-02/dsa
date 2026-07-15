#include<iostream>
using namespace std;

class Stack {
public:
int *arr;
int top;
int size;

Stack(int size){
  this->size = size;
  arr = new int[size];
  top = -1;
}


void push (int element){
//check empty space
if(size - top > 1) // if(top < size -1)
{
  top++;
  arr[top] = element;
}
else{
  cout << "Stack is Overflow" << endl;
}
}

void pop(){
if(top == -1){
  cout << "stack is Umderflow" << endl;
}
else{
  top--;
}
}

int peek(){
if(top == -1){
  cout <<"stack is Underflow" <<endl;
  return -1;
}
else{
  return arr[top];
}
}

bool isEmpty(){
  if(top == -1){
    return true;
  }
  else{
    return false;
  }
}
};
