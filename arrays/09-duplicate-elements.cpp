#include<iostream>
using namespace std;

#include <iostream>
using namespace std;
//one duplicate value only
void searchUnique(int arr[], int size) {
  int count = 0;
    for (int i = 0; i < size; i++) {

        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count += 1;
            }
        }
                if (count > 1) {
            cout << "Duplicate Element is: " << arr[i] << endl;
            return;
       }
    } 
  }
  

int main() {
    int arr[6];

    cout << "Enter 6 elements: ";
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    searchUnique(arr, 6);

    return 0;
}

  void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


 
 
