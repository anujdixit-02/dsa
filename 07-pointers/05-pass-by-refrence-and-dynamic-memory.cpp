#include<iostream>
using namespace std;

/*Q)If pass by reference can modify the original variable, why do we need pointers?

The answer is that references cannot be nullptr and cannot be reseated to refer to another object, making them simpler and safer for many functions. Pointers are more flexible: they can be nullptr, can point to different objects over time, are essential for dynamic memory (new/delete), and are widely used in data structures like linked lists, trees, and graphs.*/
int main(){

/*memory allocated automatically by the compiler. ---> static memory*/

int a = 10;
int b = 20;

cout << a << " " << b << endl;
/*

Stack Memory
+-------+
| a =10 |
+-------+
| b =20 |
+-------+
when main end stack memory is empty.

# Characteristics.....
* Fast
* Automatic allocation
* Automatic deletion
* Fixed size


*/
/*Heap memory is allocated manually using new.*/
int *p = new int;

*p = 100;
cout << *p << endl;

delete p;
/*Stack                Heap

+----+             +------+
| p  | ----------> | 100  |
+----+             +------+*/


/*
delete p so.....
the heap memory is released.*/

//creating dynamic arr 
/*
int n;
cout << "Enter the size of the array : " << endl;
cin >> n;

int *arr = new int[n];

for(int i = 0; i < n; i++){
  cin >> arr[i];
}

for(int i=0; i<n; i++){
  cout << arr[i] << " " ;
}

delete [] arr;


//createing 2d dynamic array
int row, col;
cout << "Enter the number of row : ";
cin >> row;

cout << "Enter the number of column : " ;
cin >> col;

int **arr = new int*[row]; 
/*
arr
 |
 |
 +------+
 |  *   |
 +------+
 |  *   |
 +------+
 |  *   |
 +------+
 each pointer point to one new row.
 

 //alocating each row 
 for(int i = 0; i < row; i++){
  arr[i] = new int[col];
 }

 //taking input in 2d array
 for(int i = 0; i<row; i++){
  for(int j = 0; j<col; j++){
    cin>>arr[i][j];
  }
 }

 //printing the 2d array
  for(int i = 0; i<row; i++){
  for(int j = 0; j<col; j++){
    cout << arr[i][j] << " ";
  }
  cout << endl;
 }

 //delete every row
for(int i = 0; i < row; i++){
    delete[] arr[i];
}

//delete the array of pointers
delete[] arr;

*/
return 0;
}