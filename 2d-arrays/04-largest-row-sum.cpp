#include<iostream>
#include<climits>
using namespace std;

int largestrowSum(int arr[][3],int row, int col){
  int maxi = INT_MIN;
  for(row = 0; row < 3; row++){
    int sum = 0;
    for(col = 0; col < 3; col++){
     sum += arr[row][col];
     if(sum > maxi){
      maxi = sum;
     }
  }

   
  }
  return maxi;
}  

int main(){
int arr[3][3] = {{1,2,67},{4,5,6},{7,8,9}};
cout << "the largest sum is :" << largestrowSum(arr,3,3);
}