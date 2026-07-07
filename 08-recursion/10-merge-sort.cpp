#include<iostream>
using namespace std;

void merge(int *arr, int start, int end){
  int mid = start + (end - start)/2;

  //left array lenght
  int len1 = mid - start +1;
  //right array lenght
  int len2 = end -mid;

  //create first array
  int *first = new int[len1];
  //create second array
  int *second = new int[len2];

  int k = start;
  //copy the first half element
  for(int i = 0; i <len1; i++){
    first[i] = arr[k++];
  }

   k = mid+1;
//copy the second half element
  for(int i = 0; i <len2; i++){
    second[i] = arr[k++];
  }
//merge two sorted array
int index1 = 0;
int index2 = 0;
k = start;

while(index1 < len1 && index2 < len2){
  if(first[index1] < second[index2]){
    arr[k++] = first[index1++];
  }
  else{
    arr[k++] = second[index2++];
  }
}

while(index1 < len1){
  arr[k++] = first[index1++];
}

while(index2 < len2){
  arr[k++] = second[index2++];
}

delete [] first;
delete [] second;
}
void mergeSort(int *arr, int start, int end){
  //base condition
  if(start >= end){
    return;
  }

// mid element..
int mid = start + (end - start)/2;

  //left part sorted..
  mergeSort(arr,start,mid);

  //right part sorted..
  mergeSort(arr,mid+1,end);

  merge(arr,start,end);
}
int main(){

  int arr[] ={2,5,1,6,9};
  int size = 5;

  mergeSort(arr,0,size-1);

  for(int i = 0; i < size; i++){
    cout << arr[i] << " ";
  }
  return 0;
}