#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n){
  //base condition
  if(n == 0 || n == 1){
    return;
  }
// one pass
for(int i = 0; i < n-1; i++){
  if(arr[i]>arr[i+1]){
    swap(arr[i],arr[i+1]);
  }
}
bubbleSort(arr, n-1);
}
int main(){
int arr[] = {5,4,3,2,1};
    int n = 5;

    bubbleSort(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}