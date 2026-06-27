#include<iostream>
using namespace std;

int getLen(char arr[]){
    int count = 0;
    while(arr[count] != '\0'){
        count++;
    }
    return count;
}

void reverseWords(char arr[]){
    int start = 0;
    int end = getLen(arr) - 1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printString(char arr[]){
    for(int i = 0; arr[i] != '\0'; i++){
        cout << arr[i];
    }
    cout << endl;
}

int main(){

    char arr[100];

    cout << "Enter a string: ";
    cin.getline(arr, 100);


    printString(arr);

    reverseWords(arr);

    printString(arr);
}