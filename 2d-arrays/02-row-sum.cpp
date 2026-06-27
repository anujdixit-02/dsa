#include<iostream>
using namespace std;

void rowSum(int arr[][3],int row, int col){
  for(row = 0; row < 3; row++){
    int sum = 0;
    for(col = 0; col < 3; col++){
     sum += arr[row][col];
  }

  cout << "Sum of Row " << row << " = " << sum << endl;
  }
}
int main(){
int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
rowSum(arr,3,3);
}