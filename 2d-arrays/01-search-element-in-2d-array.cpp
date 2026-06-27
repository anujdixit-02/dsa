#include<iostream>
using namespace std;

bool search(int arr[][3],int row, int col){
  int key ;
  cout << "Enter the key : ";
  cin >> key;
  for(row = 0; row < 3; row++){
    for(col = 0; col < 3; col++){
      if(arr[row][col] == key){
        return 1;
    }
  }
}
return 0;
}
int main(){
int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
if(search(arr,3,3)){
    cout << "Element Found";
}
else{
    cout << "Element Not Found";
}
}