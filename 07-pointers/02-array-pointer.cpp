#include<iostream>
using namespace std;

int main(){
  //address of the first element in array

  int arr[5] ={1,2,3,4,5};
  cout << arr << endl;

  // access the first value in the arrays
  cout << arr[0] << endl;

  //address using '&' 
  cout << &arr[0] << endl;


  // pointing to the value
  cout << *arr << endl;

  (*arr)++;
  cout << *arr << endl;

  //arr[i] = *(arr +i)
  cout << arr[2] << endl;
  cout << *(arr+2) << endl;
  // i[arr] = *(i + arr)
  cout << 2[arr] << endl;

  //sizeof

  int temp[10] ={0};
  cout << sizeof(temp) << endl;

  int *ptr = &temp[10];
  cout << sizeof(ptr) << endl;

  cout << sizeof(*ptr) << endl;

  cout << &temp << endl;
  cout << &ptr << endl;
  return 0;
}