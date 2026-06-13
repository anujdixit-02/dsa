#include<iostream>
using namespace std;

void search(int arr[],int size){
int key;
cout << "Enter the key : ";
cin >> key;
bool found = false;
for(int i = 0; i < size; i++){
 
      if(arr[i] == key){
        found = true;
        break;
    }
}

if(found){
    cout << "Key is found!" << endl;
}
else{
    cout << "Key is not found!" << endl;
}

}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[5];
  cout << "Enter the Elements :" << endl;
  for(int i = 0; i < 5; i++ ){
    cin >> arr[i];
  }
  search(arr,5);
  printArray(arr,5);
}