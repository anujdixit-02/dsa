// array implementation
#include<iostream>
using namespace std;

class Queue{
int *arr;
int front;
int rear;
int size;

public:

Queue(){
  size = 10001;
  arr = new int[size];
  front = 0;
  rear = 0;
}
//isEmpty function 
  bool isEmpty(){
    if(front == rear){
      return true;
    }
    else{
      return false;
    }
  }
//inqueue function (push function)
void inQueue(int data){
  //check weather the queue is full
  if(rear == size){
    cout << "Size is full";
  }
  else{
    arr[rear] = data;
    rear++;
  }
}

//deQueue function (pop function)
int deQueue(){
  if(front == rear){
    cout << "Queue is Empty";
    return -1;
  }
  else{
    int ans = arr[front];
    arr[front] = -1;
    front++;
    if(front == rear){
      front = 0;
      rear = 0;
    }
    return ans;
  }
}

//front fnction
int getFront(){
  if(front == rear){
    return -1;
  }
  else{
    return arr[front];
  }
}
};
int main(){

    Queue q;

    q.inQueue(10);
    q.inQueue(20);
    q.inQueue(30);

    cout << q.getFront() << endl;

    cout << q.deQueue() << endl;

    cout << q.getFront() << endl;

    return 0;
}