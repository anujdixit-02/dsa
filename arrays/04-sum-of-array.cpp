#include<iostream>
using namespace std;

int sumArray(){
  int sum = 0;
  int arr[5];
  cout << "Enter the Elements :" << endl;
  for(int i = 0; i < 5; i++ ){
    cin >> arr[i];
    sum = sum + arr[i];
  }
  //sum of the element
  return sum;
}
void printArray(){
  int arr[10];
  for (int i = 0; i < 10; i++){
    cout << arr[i] << " ";
}
}

int main (){
  int sum = sumArray();
  cout << sum <<endl; 
}