#include<iostream>
using namespace std;
 /*bool isSorted(int arr[], int size){
  bool ans;
  //base case
  if(size == 0 || size == 1){
    return true;
  }
  if(arr[0]>arr[1]){
    return false;
  }
  else{
     ans = isSorted(arr+1,size-1);
  }
  return ans;
}
bool linearSearch(int arr[], int size, int key){
  bool ans;
  //base case
  if(size == 0){
    return false;
  }
 if(arr[0] == key){
  return true;
 }
 //recuesive call
 ans = linearSearch(arr+1,size-1,key);
 
 return ans;

}
 */
int binarySearch(int arr[], int start, int end, int key){

    // Base condition
    if(start > end){
        return -1;
    }

    int mid = start + (end - start) / 2;

    // Element found
    if(arr[mid] == key){
        return mid;
    }

    // Search right half
    if(arr[mid] < key){
        return binarySearch(arr, mid + 1, end, key);
    }

    // Search left half
    else{
        return binarySearch(arr, start, mid - 1, key);
    }
}

int main(){

    int arr[] = {2,4,6,8,10,12,14};

    for(int i = 0; i < 7; i++){
      cout << arr[i] << " " << endl;
    }

    int size = 7;
    int key;

    cout << "Enter key: ";
    cin >> key;

    int ans = binarySearch(arr, 0, size - 1, key);

    if(ans == -1){
        cout << "Element not found";
    }
    else{
        cout << "Element found at index " << ans;
    }

    return 0;
}
