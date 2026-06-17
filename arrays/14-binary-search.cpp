#include<iostream>
using namespace std;

int binarySearch(int arr[], int size){
  int mid;
  int left = 0;
  int right = size -1;
  bool found = 0;

  int key;
  cout << "Enter the key : ";
  cin >> key;

  mid = (left + right) / 2; 
  while(left <= right ){
    if(arr[mid] == key){
      cout << "Element present in array.";
      found = 1;
      break;
    }
    else if(arr[mid] < key){
      left = mid + 1;
      mid = (left + right) / 2;
    }

    else if(arr[mid] > key){
      right = mid -1;
      mid = (left + right) / 2;
    }
  }
if(!found){
  cout << "Key is not preswnt in array." << endl;
}
  return key;
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    int arr[5];

    cout << "Enter elements in array : " << endl;
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }

    binarySearch(arr, 5);

 
    return 0;
}
