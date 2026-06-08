#include<iostream>
#include<math.h>
using namespace std;

int main (){
  int n ;
cout << "Enter the decimal number :" ;
cin >> n;
int i = 0;
int ans = 0;

while(n != 0){  // loop till n become 0

  int bit = n & 1; // (&1)help to check last bit convert into 0 and 1
  ans = (bit * pow(10,i)) + ans; // reverse the answer 

  n = n >> 1; // right shift to check the last bit (/2)
  i++; 


}

cout << "Answer is :" << ans << endl;

}