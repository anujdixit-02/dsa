#include<iostream>
using namespace std;

void rowSum(int arr[][3],int row, int col){
  for(col = 0; col < 3; col++){
    int sum = 0;
    for(row = 0; row < 3; row++){
     sum += arr[row][col];
  }

  cout << "Sum of col " << col << " = " << sum << endl;
  }
}
int main(){
int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
rowSum(arr,3,3);
}