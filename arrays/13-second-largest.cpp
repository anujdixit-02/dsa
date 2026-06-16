#include<iostream>
#include <climits>
using namespace std;

int secondLargest(int arr[], int n){
  int largest = INT_MIN;
  int secondLargest = INT_MIN;

  for(int i = 0; i < n; i++){
    if(arr[i] > largest){
      secondLargest = largest;
      largest = arr[i];
    }
    else if (secondLargest < arr[i] && largest > arr[i]){
      secondLargest = arr[i];
    }

 
  }
  return secondLargest;
}

int main (){
  int arr[5];
  cout << "Enetr the element : " <<endl;

  for(int i = 0; i < 5; i++){
    cin >> arr[i];

  }

 int result =  secondLargest(arr,5);
 cout <<"The  second largest element is : "<< result << " ";
   
}