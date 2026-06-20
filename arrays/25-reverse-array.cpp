#include<iostream>
#include<vector>
using namespace std;
void reverseArray(int arr[],int size){
  int start = 0;
  int end = size -1;
  while(start <= end){
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
    
}
void printArray(int arr[], int n){
  for(int i = 0; i<n; i++){
    cout << arr[i] << " ";
  }
 }

 int main(){
  int arr[5];
  cout << "Emter the Element in array : ";
  for(int i = 0; i < 5; i++){
    cin >> arr[i];
  }  
  printArray(arr,5);
  reverseArray(arr,5);
  cout << "Reversed array :" ;
  printArray(arr,5);
 } 