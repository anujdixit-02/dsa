#include<iostream>
#include<string>
using namespace std;

int getLen(char arr[]){
    int count = 0;

    while(arr[count] != '\0'){
        count++;
    }

    return count ;

}

void reverseString(char arr[]){
int start = 0;
int end = getLen(arr) -1;
int ans ;

while(start < end){
   swap(arr[start++],arr[end--]);
}
 
}
void printArray(char arr[]){
  for(int i = 0; i <= getLen(arr) -1; i++){
    cout << arr[i] << " ";
  }
 }

int main(){
      char arr[100];

    cout << "Enter the string: ";
    cin >> arr;

    cout << "the lenght is :"<<getLen(arr)<<endl;
    printArray(arr);
    cout << endl;
    reverseString(arr);
    cout <<"reversed string is : "<< endl;
    printArray(arr);
  }
 
