#include<iostream>
using namespace std;
int lastOccurrence(int last[], int size, int key){
  int ans;
  int start = 0;
  int end = size -1;

  int mid = start + (end - start)/2; 

  while(start <= end){
    if(last[mid] == key){
      ans = mid;
      start = mid +1;
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
int arr[10] = {1,2,3,3,3,3,4,5,6};

cout << "last occurrance is at the index : " << lastOccurrence(arr,10,3)<<endl;
}