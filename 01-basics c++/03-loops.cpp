#include<iostream>
using namespace std;

int main (){
 

//prime or not prime 
int p;
cin >> p;
int j = 2;
while(j<p){
  if(p%j == 0 ){
    cout<<"not a prime number" << endl;

  }
  else{
    cout<< "prime number" << endl;
  }
j++;
}
  
} 