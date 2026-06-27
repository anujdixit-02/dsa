#include<iostream>
using namespace std; 
int main (){ 

    int a = 4;
  int b = 6;

  //bitwise operators
  /*
  AND = &
  OR = |
  NOT = ~
  XOR = ^
  */
  cout << "a&b :" << " " << (a & b) << endl;
  cout << "a|b :" <<  " " << (a | b) << endl;
  cout << "a~b :" <<  " " << ~a << endl;
  cout << "a^b :" << " " << (a ^ b) << endl;

  /*
  left shift (<<)
  right shift (>>)
  */
 cout << (17 >> 1) << endl;
 cout << (17 >> 2) << endl;
 cout << (19 << 1) << endl;
 cout << (20 << 2) << endl;

 /*
 increment (++)
 decrement (--)
 */
int i = 7 ;

cout << (++i) << endl; // 8
cout << (i++) << endl; // 8 + 1 = 9
cout << (i--) << endl; // 9 - 1 = 8
cout << (--i) << endl; // 8 - 1 = 7

int a1 = 1;
int b1 = 2;

if(a1-- > 0 || ++b1 > 2){// a1-- = 1 > 0 (true) 
  cout << "stage1 - inside if" ; //output = "stage1 - inside if"
}
else{
  cout << "stage2 - inside else";
}
cout<<endl;
cout << a1 << " " << b1 << endl;
// final value of a and b is a = 0 and b = 2 

int number = 3;
cout << (25 * ( ++ number))<< endl; // ++number = 4 
// 25 * 4 = 100;


//for loop
int n ;
cout << "Enter the number :" << endl;
cin>>n;
for( int i = 0; i < n; i++){
  cout << i << endl;
} 

//for loop multiple condition 
for( int a2 = 0 , b2 = 1, c2 = 2; a2 >= 0 && b2 >= 1 && c2 >= 2; a2--, b2--, c2--){
  cout << a2 << b2 << c2 << endl;
} 
//sum 
int n2 ;
cin >> n2 ;
int sum = 0;
for (int i = 0 ; i < n2; i++){
  sum += i;
  cout << "sun is:"<< sum << endl;
   
}
 
//fibonacci serise 
int n3;
 
cout << "Enter the nth term";
cin>>n3;
int a3 = 0;
int b3 = 1;
cout << a3 << " " << b3 << " ";

 for (int i = 2; i <= n3; i++ ){
  int nextNumber = a3+b3;
  cout << nextNumber<<" "; 
  a3 = b3;
  b3 = nextNumber;
 }
 //primeNumber or not 
 int n4;
 cout << "Enter the number ";
 cin >> n4;

 bool isPrime = 1;

 for ( int i = 2; i<n4; i++){
  if(n4%i == 0){

    isPrime = 0;
    break; 
  }
 }

if(isPrime == 0){
  cout << "Not a primeNumber" << endl;

}
else{
  cout << "Is a primeNumber" << endl;
}
}