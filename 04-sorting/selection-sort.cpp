 #include<iostream>
 using namespace std;

 void selectionSort(int arr[], int n){
  
  for(int i = 0; i < n-1; i++){
    int miniIndex = i;
    for(int j = i+1; j < n; j++){
      if(arr[j] < arr[miniIndex]){
        miniIndex = j;
      }
    }
    swap(arr[miniIndex],arr[i]);
  }
  
 }

 void printArray(int arr[], int n){
  for(int i = 0; i<n; i++){
    cout << arr[i] << " ";
  }
 }

 int main(){
  int arr[10];
  cout << "Emter the Element in array : ";
  for(int i = 0; i < 10; i++){
    cin >> arr[i];
  }  
  printArray(arr,10);
  selectionSort(arr,10);
  cout << "Sorted array :"<<endl;
  printArray(arr,10);
 }