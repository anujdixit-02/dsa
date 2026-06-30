#include<iostream>
using namespace std;
int factorial(int n){
  //base condition
  if(n == 0){
    return 1;
  }

  //recursive call
  return n * factorial(n -1);

}

int power(int n, int a){
  //base condition
  if(a == 0){
    return 1;
  }

  //recursive call

  return n * power(n,a-1);

}

int sumNum (int n){
  int sum = 0;
  int count = 0;

// base condition
  if(n == 0){
    return 0;
  }
//recursive call
  return n+ sumNum(n-1);
}

int fibonacci(int n){
  //base condtions
  if(n == 0){
    return 0;
  }
  if(n == 1){
    return 1;
  }
// recursive call
  return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
  int n;
  cout << "Enter the value of n : ";
  cin >> n;

  int ans = factorial(n);
  cout << "factorial is : " << ans << endl;


  int n1;
  cout << "Enter the value of base : ";
  cin >> n1;

  int a;
  cout << "Enter the value of power : ";
  cin >> a;

  int ans1 = power(n1,a);
  cout << "Power is : " << ans1 << endl;

  int n3;
  cout << "Enter the term : ";
  cin >> n3;

  cout << "Sum is : " << sumNum(n3) << endl;
  cout << "fibonacci series is : " << fibonacci(n3)<<endl;
  return 0;
}