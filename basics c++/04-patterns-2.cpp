#include<iostream>
using namespace std;

int main (){
   /*
  A A A A
  B B B B
  C C C C
  D D D D
  */ 
int n;
cout << "Enter the number :" ;
cin >> n;

int i = 1;
 

    while(i<=n){
      int j  = 1;
      while(j<=n){
        char ch = 'A'+ i - 1;
        cout <<ch<< " " ;
        
        j++;
      }
      cout<<endl;
      i++;
    }

/*
A B C
A B C
A B C
*/   

int n1;
cout << "Enter the number :" ;
cin >> n1;

int i1 = 1;
 

while(i1<=n1){
      int j1  = 1;
      while(j1<=n1){
        char ch1 = 'A'+ j1 - 1;
        cout <<ch1<< " " ;
        
        j1++;
      }
      cout<<endl;
      i1++;
    }
int n2;
cout << "Enter the number :" ;
cin >> n2;

int i2 = 1;
 

while(i2<=n2){
      int j2  = 1;
      while(j2<=n2){
        char ch2 = 'A'+ i2 + j2 - 1;
        cout <<ch2<< " " ;
        
        j2++;
      }
      cout<<endl;
      i2++;
    }    


int n3;
cout << "Enter the number :" ;
cin >> n3;

int i3 = 1;
 

while(i3<=n3){
      int j3  = 1;
      while(j3<=i3){
        char ch3 = 'A'+ i3 - 1;
        cout <<ch3<< " " ;
        
        j3++;
      }
      cout<<endl;
      i3++;
    } 
   
 int n4;
cout << "Enter the number :" ;
cin >> n4;

int i4 = 1;  

while(i4<=n4){
      int j4  = 1;
      char value = 'A';
      while(j4<=i4){
         
         
        cout <<value<< " " ;
        value = value + 1;
        j4++;
        value++;
         
      }
      cout<<endl;
      i4++;
    }     
      
  }