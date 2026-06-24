#include<iostream>
#include<algorithm>
using namespace std;
 
bool check(int arr[], int size){
  int count = 0;
  for(int i = 1; i < size; i++){
    if(arr[i-1] >  arr[i]){
      count++;
    }
  }
  if(arr[size-1]>arr[0]){
    count++;

    return count <= 1;
  }
}
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5];

    cout << "Enter the elements in array: ";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    printArray(arr, 5);

    if(check(arr, 5)) {
        cout << "Array is Sorted and Rotated" << endl;
    }
    else {
        cout << "Array is NOT Sorted and Rotated" << endl;
    }

    return 0;
}