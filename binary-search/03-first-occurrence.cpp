#include<iostream>
using namespace std;

int firstOccurrence(int last[], int size, int key){
  int ans;
  int start = 0;
  int end = size -1;

  int mid = start + (end - start)/2; 

  while(start <= end){
    if(last[mid] == key){
      ans = mid;
      end = mid -1;
    }
    else if(last[mid] > key){
      end = mid -1;
    }
    else{
      start = mid +1; 
    }
    mid = start + (end - start)/2;
    }
  return ans; 
}
int main (){
int arr[5] = {1,2,3,4,5};

cout << "first occurrance is at the index : " << firstOccurrence(arr,5,3)<<endl;
}