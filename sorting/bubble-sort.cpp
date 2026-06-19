#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
  for(int i = 0; i<n; i++){
    for(int j = 0; j < n-1; j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
      }
    } 
  }
}

 void printArray(int arr[], int n){
  for(int i = 0; i<n; i++){
    cout << arr[i] << " ";
  }
 }

 int main(){
  int arr[10];
  cout << "Emter the Element in array : ";
  for(int i = 0; i < 10; i++){
    cin >> arr[i];
  }  
  printArray(arr,10);
  bubbleSort(arr,10);
  cout << "Sorted array :"<<endl;
  printArray(arr,10);
 }