#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
  for(int i = 1; i<n; i++){
    int j = i-1;
    int temp = arr[i];
    for(; j > 0; j--){
      if(arr[j]>temp){//shift
        arr[j+1]=arr[j];
      }
      else{
        break;
      }
       
    } 
    arr[j+1] = temp;
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