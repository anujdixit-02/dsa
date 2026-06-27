#include<iostream>
using namespace std;

void spiralPrint(int arr[][4], int row, int col){

    int startRow = 0;
    int endRow = row - 1;

    int startCol = 0;
    int endCol = col - 1;

    int count = 0;
    int total = row * col;

    while(count < total){

        // Top Row
        for(int i = startCol; i <= endCol && count < total; i++){
            cout << arr[startRow][i] << " ";
            count++;
        }
        startRow++;

        // Right Column
        for(int i = startRow; i <= endRow && count < total; i++){
            cout << arr[i][endCol] << " ";
            count++;
        }
        endCol--;

        // Bottom Row
        for(int i = endCol; i >= startCol && count < total; i--){
            cout << arr[endRow][i] << " ";
            count++;
        }
        endRow--;

        // Left Column
        for(int i = endRow; i >= startRow && count < total; i--){
            cout << arr[i][startCol] << " ";
            count++;
        }
        startCol++;
    }
}

int main(){

    int arr[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    spiralPrint(arr,4,4);

    return 0;
}