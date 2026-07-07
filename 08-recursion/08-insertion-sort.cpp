#include<iostream>
#include<climits>
using namespace std;

void insertionSort(int arr[], int n){
// base condition
if(n <= 1){
  return;
}
//first sort n-1 element
insertionSort(arr,n-1);

//last element
int last = arr[n-1];
int j =n-2;

while(j>=0 && arr[j]>last){
  arr[j+1]=arr[j];
  j--;
}
 arr[j+1] = last;
}
int main(){
  int arr[] = {64,25,12,22,11};
    int n = 5;

    insertionSort(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
  return 0;
}