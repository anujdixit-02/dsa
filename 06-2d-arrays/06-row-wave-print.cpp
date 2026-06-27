#include<iostream>
using namespace std;

void rowWaveprint(int arr[][4], int row, int col){

  for(row = 0; row < 4; row++){

    if(row % 2 == 0){
      for(col = 0; col < 4; col++){
        cout << arr[row][col] << " ";
      }
    }
    else{
      for(col = col -1; col >= 0; col--){
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

    rowWaveprint(arr,4,4);

    return 0;
}