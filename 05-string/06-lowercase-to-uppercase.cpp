#include<iostream>
#include<string>
using namespace std;
void toUppercase(char arr[]){
  for(int i = 0; arr[i] != '\0'; i++){
    if(arr[i] >= 'a' && arr[i] <= 'z'){

      arr[i] = arr[i] - 'a' + 'A';

    }
  }
}
int main(){ 
char arr[100];

    cout << "Enter a string: ";
    cin >> arr;

    toUppercase(arr);

    cout << "Uppercase string: " << arr << endl;
}

/*
char arr[100];

    cout << "Enter a string: ";
    cin >> arr;

    for(int i = 0; arr[i] != '\0'; i++) {
        arr[i] = toupper(arr[i]);
    }

    cout << arr << endl;

*/