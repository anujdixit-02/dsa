#include<iostream>
using namespace std;

#include <iostream>
using namespace std;

void searchUnique(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int count = 0;

        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count == 1) {
            cout << "Unique Element is: " << arr[i] << endl;
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


 
 
