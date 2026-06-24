#include<iostream>
using namespace std;

void mergeSortedArrays(int arr[],int n ,int brr[], int m,int ans[]){
  int i = 0;
  int j = 0;
  int k = 0;

  while(i<n && j < m){
   if(arr[i] < brr[j]){
    ans[k++] = arr[i++];
   } 
   else{
    ans[k++] = brr[j++];
   }
  }
   while(i < n) {
        ans[k++] = arr[i++];
    }

    // Copy remaining elements of brr
    while(j < m) {
        ans[k++] = brr[j++];
}
}
void printArray(int arr[], int size){
      for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
   

int main() { 
    int n;
    cout<<"Enter the size of array1 : ";
    cin >> n;
    int arr1[n];
    cout << "Enter the elements in array1 : ";
    for(int i =0; i<n; i++){
      cin >> arr1[i];
    }
    int m;
    cout << "Enter the size of array2 : ";
    cin >> m;
    int arr2[m];
    cout << "Enter the elements in array2 : ";
    for(int i =0; i<n; i++){
      cin >> arr2[i];
    }
    int ans[n + m];

    mergeSortedArrays(arr1, n, arr2, m, ans);

    cout << "Merged Array: ";
    printArray(ans, n + m);

    return 0;
}
