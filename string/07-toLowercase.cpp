#include<iostream>
#include<string>
using namespace std;

void toLowercase(char arr[]){
  for(int i = 0; arr[i] != '\0'; i++){
    if(arr[i] >= 'A' && arr[i] <= 'Z'){
      arr[i] = arr[i] - 'A' + 'a';
    }
  }
}
int main(){
char arr[100];

    cout << "Enter a string: ";
    cin >> arr;

    toLowercase(arr);

    cout << "Lowercase string: " << arr << endl;
}