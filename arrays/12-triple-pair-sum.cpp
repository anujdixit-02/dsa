#include<iostream>
using namespace std;

void pairSum (int arr[], int n){
  int target;
  cout << "Enter the target : ";
  cin >> target;
  bool found;
  for(int i = 0; i<n; i++){
    for(int j = i; j<n; j++){
      for(int k = j; k<n; k++){
      if(arr[i] + arr[j] + arr[k] == target){
        found = 1;
        cout << "(" << arr[i] << "," << arr[j] << "," << arr[k] <<")";
      }
      }
    }
  }
  if(!found)
{
    cout << "No pair found";
}
}
void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    int arr[10];

    cout << "Enter elements in array : " << endl;
    for(int i = 0; i < 10; i++){
        cin >> arr[i];
    }

    pairSum(arr, 6);

 
    return 0;
}
