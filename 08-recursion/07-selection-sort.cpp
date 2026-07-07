#include<iostream>
#include<climits>
using namespace std;

void selectionSort(int arr[], int n, int index){
// base condition
if(index == n-1){
  return;
}
int minElement = index;
for(int i = index +1; i < n; i++){
  if(arr[i]<arr[minElement]){
   minElement = i;
  }
}
  swap(arr[index],arr[minElement]);

selectionSort(arr,n,index+1);
}
int main(){
  int arr[] = {64,25,12,22,11};
    int n = 5;

    selectionSort(arr, n, 0);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
  return 0;
}