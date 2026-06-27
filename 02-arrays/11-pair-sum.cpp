#include<iostream>
using namespace std;

void pairSum (int arr[], int n){
  int target;
  cout << "Enter the target : ";
  cin >> target;
  bool found;
  for(int i = 0; i<n; i++){
    /*
not using this because it get duplicate value 
for(int j = n-1; j > 1; j--)

for(int j = i + 1; j < n; j++)

This automatically:

avoids checking the same pair twice
avoids i == j
checks every valid pair exactly once
    */
    //for(int j = n-1; j>1; j--){
    for(int j = i; j<n; j++){
      if(arr[i] + arr[j] == target){
        found = 1;
        cout << "(" << arr[i] << "," << arr[j] << ")";
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
