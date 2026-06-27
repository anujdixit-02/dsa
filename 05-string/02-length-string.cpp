#include<iostream>
using namespace std;

void getLen(char arr[]){
    int count = 0;

    while(arr[count] != '\0'){
        count++;
    }

    cout << "Total length is: " << count << endl;
}

int main(){

    char arr[100];

    cout << "Enter the string: ";
    cin >> arr;

    getLen(arr);

    return 0;
}