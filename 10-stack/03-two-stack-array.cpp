#include<iostream>
using namespace std;

class Stack {
public:
int *arr;
int top1;
int top2;
int size;

Stack(int size){
  this->size = size;
  arr = new int[size];
  top1 = -1;
  top2 = size;
}


void push1 (int element){
//check empty space
if(top2 - top1 > 1) // if(top < top2 -1)
{
  top1++;
  arr[top1] = element;
}
else{
  cout << "Stack is Overflow" << endl;
}
}


void push2 (int element){
//check empty space
if(top2 - top1 > 1) // if(top < top2 -1)
{
  top2--;
  arr[top2] = element;
}
else{
  cout << "Stack is Overflow" << endl;
}
}

void pop(){
if(top1 == -1){
  cout << "stack is Underflow" << endl;
}
else{
  int ans = arr[top1];
  top1--;
}
}
void pop(){
if(top2 < size){
int ans = arr[top2];
top2++;
}
else{
  cout << "Overflow" <<endl;
}
}
};