#include<iostream>
#include <climits>
using namespace std;

int getMax(int arr[], int n){
  int mini = INT_MAX;

  for(int i = 0; i < n; i++){

    mini = min(mini,arr[i]);//built in fuction   
    //if(arr[i] < min){
     // min = arr[i];
    //}
  }
  return mini;
}

int main (){
  int arr[5];
  cout << "Enetr the element : " <<endl;

  for(int i = 0; i < 5; i++){
    cin >> arr[i];

  }

 int result =  getMax(arr,5);
 cout <<"The smallest element is : "<< result << " ";
   
}