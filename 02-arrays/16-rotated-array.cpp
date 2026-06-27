#include<iostream>
#include<vector>
using namespace std;
void rotateArray(int arr[],int size ){
  int k;
  cout << "Enter the number of rotations : ";
  cin >> k;
  int temp[size]; 

  for(int i = 0; i < size; i++){
    temp[(i+k)% size] = arr[i];
  }
  for(int i = 0; i < size; i++){
    arr[i] = temp[i];
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
  rotateArray(arr,5 );
  cout << "Rotated array :" ;
  printArray(arr,5);
 } 