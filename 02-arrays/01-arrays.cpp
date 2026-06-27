#include<iostream>
using namespace std;


int main (){

  // creating an array .
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  //printing array
  for (int i = 0; i < 10; i++){
    cout << arr[i] << " ";
     
    
  }

int crr[5];

cout << "Enter the value of array :";
for (int i = 0; i <= 5; i++ ){
  cin >> crr[i];
}

for (int i = 0; i < 5; i++){
  cout << crr[i] << " ";
}

int drr [10] = {1};
// output = 1 0 0 0 0 0 0 0 0 0 

for (int i = 0; i < 10; i++){
  cout << drr[i] << " ";
}
  
char err[5] = {'a','b','c','d','e'};
for (int i = 0; i < 5; i++){
  cout << err[i] << " ";
}
}
 