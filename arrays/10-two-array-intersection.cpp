#include<iostream>
using namespace std;

void intersection(int arr[],int brr[], int size){
 
  
  for(int i =0; i < size; i++){
    int  count = 0;
    for (int j =0; j < size; j++){
      if(arr[i] == brr[j]){
        count++;
         
      }
    }
  
  if(count >= 1) {
    cout << "Intersection b/w two arrays is :" << arr[i] <<endl;
  } 
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

    cout << "Enter 6 elements in first array : ";
    for(int i = 0; i < 6; i++){
        cin >> arr[i];
    }

    int brr[6];

    cout << "Enter 6 elements in second array : ";
    for(int i = 0; i < 6; i++){
        cin >> brr[i];
    }

    intersection(arr, brr, 6);

 
    return 0;
}
