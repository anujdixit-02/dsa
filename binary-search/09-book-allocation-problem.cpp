#include<iostream>
using namespace std;

int isPossible(int arr[],int n,int m, int mid){
  int studentCount = 1;
  int pageSum = 0;

  for(int i = 0; i < n; i++){
    if(pageSum+arr[i] <= mid){
    pageSum += arr[i];
  }
    else{
      studentCount++;
      if(studentCount > m || arr[i] > mid){
        return false;
      }
      pageSum = arr[i];
    }
  }
  return true;
  }


int allocatedBook(int arr[],int size, int m ){
  int start = 0;
  int sum = 0;
  for (int i = 0; i<size; i++){
    sum = sum + arr[i];

  }
  int end = sum ;
  int ans = -1;
  int mid = start +(end-start)/2;

  while(start <= end){
    if(isPossible(arr,size,m,mid)){
      ans = mid;
      end = mid -1;
    }
    else{
      start = mid +1;
    }
    mid = start +(end-start)/2;
  }
return ans; 
}

int main(){
  int arr[5] = {10,20,30,40,50};

  cout << "number of allocation of book is : " << allocatedBook(arr,5,2);
}