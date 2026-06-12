#include<iostream>
using namespace std;
//function of power
int power(){

    int a ;
  cout << "Enter the base value : ";
  cin >> a;

  int b ;
  cout<< "Enter the power value : ";
  cin >> b;


  int ans = 1;

  for(int i = 1; i <= b; i++){
    ans = ans*a;

     
  }

  return ans;

}
//To check weather the number is even or odd 
void isEven() {
  int a ;
  cout << "Enter the number : ";
  cin >> a;

  if(a % 2 == 0){
    cout << "NumberIsEven ";
     
  }
  else{
    cout << "NumnerIsOdd ";
    
  }

}
// factorial function 
int factorial (int n){
  int fact = 1;
  for (int i =1; i <= n; i++){  
  fact = fact*i;
  }
  return fact;
}
// combination nCr function

// formula is (n!)/(r! *(n!-r!))
int nCr ( ){
  int n ;
  cout << "Enter the value of n : ";
  cin >> n;

  int r ;
  cout << "Enter the value of r : ";
  cin >> r;
  int ans = factorial(n) / (factorial(r) * factorial(n - r));

  return ans ;
} 
// to check prime or not prime 

bool isPrime(int n){
  for (int i = 2; i< n; i++){
    if(n%i == 0){
 
      return 0;

    }
  
  }
 
  return 1;

}
// ap function formula ( 3 * n + 7)
int ap(int n){

int ans = (3 * n + 7);

return ans;
}
// fibonacci series 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
void fibonacci(int n){
  int a = 0;
  int b = 1;

  cout << a <<" "<< b << " ";

  for (int i = 2; i <= n; i++){
    int nextNumber = a + b;
    cout << nextNumber << " " ;
    a = b;
    b = nextNumber; 

  }
  

   
}

int setBitCount(int a){
  int count = 0;
  while (a != 0){
    if (a%2 == 1){
      count++;

    }
    a = a / 2;
  }
  return count ;
}
/* 2nd method for calculating bit's
int countSetBits(int n) {
    int count = 0;

    while(n != 0) {
        if(n & 1) {
            count++;
        }
        n = n >> 1;
    }

    return count;
}
*/

int main (){
 
  int ans = power ();
  cout << "Answe is : "<<ans << endl;

  isEven();
  cout << endl;

  int ncr = nCr();
  cout << ncr << endl;

  int n ;
  cout << "Emter the number : ";
  cin >> n;
  
  if(isPrime(n)){
    cout << "Is a prime number."<<endl;

  }
  else{
    cout<< "Not a prime number."<<endl;
  }

  int  n1;
  cout << "Enter the value of n : ";
  cin >> n1;

  int apAns = ap(n1) ;
  cout << apAns << endl;

  int n3;
  cout << "Enter the nth term of fibonaccci series : ";
  cin >> n3;

  fibonacci(n3);

  int a;
  cout << "Enter the first value for setCount : ";
  cin >> a;

  int b;
  cout << "Enter the second value for setCount : ";
  cin >> b;

  int setcount = setBitCount(a) + setBitCount(b);
  cout <<"The Answer is : " << setcount <<endl;

  return 0;

}