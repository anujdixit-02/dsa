#include<iostream>
using namespace std;
int main(){
//createing 2d dynamic array
int row, col;
cout << "Enter the number of row : ";
cin >> row;

cout << "Enter the number of column : " ;
cin >> col;

int **arr = new int*[row]; 
/*
arr
 |
 |
 +------+
 |  *   |
 +------+
 |  *   |
 +------+
 |  *   |
 +------+
 each pointer point to one new row.
 */

 //alocating each row 
 for(int i = 0; i < row; i++){
  arr[i] = new int[col];
 }

 //taking input in 2d array
 for(int i = 0; i<row; i++){
  for(int j = 0; j<col; j++){
    cin>>arr[i][j];
  }
 }

 //printing the 2d array
  for(int i = 0; i<row; i++){
  for(int j = 0; j<col; j++){
    cout << arr[i][j] << " ";
  }
  cout << endl;
 }

 //delete every row
for(int i = 0; i < row; i++){
    delete[] arr[i];
}

//delete the array of pointers
delete[] arr;
return 0;
}