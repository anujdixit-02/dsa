#include<iostream>
using namespace std;

void colWaveprint(int arr[][4], int row, int col){

  for(col = 0; col < 4; col++){

    if(col % 2 == 0){
      for(row = 0; row < 4; row++){
        cout << arr[row][col] << " ";
      }
    }
    else{
      for(row = row -1; row >= 0; row--){
        cout << arr[row][col] << " ";
      }
    }
  }

}
int main(){
 int arr[4][4] = {
        {1,11,111,1111},
        {2,22,222,2222},
        {3,33,333,3333},
        {4,44,444,4444}
    };

    colWaveprint(arr,4,4);

    return 0;
}