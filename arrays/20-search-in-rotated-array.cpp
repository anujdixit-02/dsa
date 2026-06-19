#include<iostream>
using namespace std;

int pivotElement(int arr[], int size){
    int start = 0;
    int end = size - 1;

    while(start < end){
        int mid = start + (end - start) / 2;

        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }
    return start;
}

int binarySearch(int arr[], int s, int e, int k){
    int left = s;
    int right = e;

    while(left <= right){

        int mid = left + (right - left) / 2;

        if(arr[mid] == k){
            return mid;
        }
        else if(arr[mid] < k){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }

    return -1;
}

int findNumber(int arr[], int n, int k){

    int pivot = pivotElement(arr, n);

    if(k >= arr[pivot] && k <= arr[n - 1]){
        return binarySearch(arr, pivot, n - 1, k);
    }
    else{
        return binarySearch(arr, 0, pivot - 1, k);
    }
}

int main(){

    int arr[5];

    cout << "Enter elements in rotated sorted array: ";

    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }

    int key;
    cout << "Enter key: ";
    cin >> key;

    int ans = findNumber(arr, 5, key);

    if(ans != -1){
        cout << "Element found at index: " << ans << endl;
    }
    else{
        cout << "Element not found" << endl;
    }

    return 0;
}