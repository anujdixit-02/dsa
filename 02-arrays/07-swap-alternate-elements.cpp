#include<iostream>
using namespace std;

void swapAlter(int arr[], int n){
  int start = 0;
  int end = 1;

  while(start < n){
    swap(arr[start], arr[end]);
    start = start + 2;
    end = end +2;
  }
}
  void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    int arr[6];

    cout << "Enter 6 elements: ";
    for(int i = 0; i < 6; i++){
        cin >> arr[i];
    }

    swapAlter(arr, 6);

    cout << "swapAlter Array: ";
    printArray(arr, 6);

    return 0;
}
