#include<iostream>
#include <climits>
using namespace std;

int getMax(int arr[], int n){
  int max = INT_MIN;

  for(int i = 0; i < n; i++){
    if(arr[i] > max){
      max = arr[i];
    }
  }
  return max;
}

int main (){
  int arr[5];
  cout << "Enetr the element : " <<endl;

  for(int i = 0; i < 5; i++){
    cin >> arr[i];

  }

 int result =  getMax(arr,5);
 cout <<"The largest element is : "<< result << " ";
   
}