#include<iostream>
using namespace std;
int climbStairs(int n){
  //base condtions
  if(n<0){
    return 0;
  }
  if(n == 0){
    return 1;
  }
// recursive call
  return climbStairs(n-1)+climbStairs(n-2);
}

int main(){
    int n;
  cout << "Enter the value of n : ";
  cin >> n;
  cout << climbStairs(n) << endl;
}