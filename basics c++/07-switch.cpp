#include<iostream>
using namespace std;

int main(){
  
  // calculator only take int value 

  int a, b;

  cout << "Enter the value of a :" ;
  cin>>a;
   
 cout << "Enter the vlue of b :";
 cin>>b;
 
 char op;
 cout << "Enter the opration to perform : ";
 cin >> op;

 switch (op)
 {
 case '+': cout << (a+b) << endl;
           break; 

 case '-': cout << (a-b) << endl;
           break;
           
           
case '/': cout << (a/b) << endl;
           break;
           
case '*': cout << (a*b) << endl;
           break;           
   
   
 
 default: cout << "You did not chosse the correct opration"<<endl;
  break;
 }
 

 // money need for $1330 
 int m;
 cout<< "Enter the money amount :";
 cin>>m;

 int need ;
 cout << "Enter the notes you want to know \n $100 \n $50 \n $20 \n $1" << endl;
 cin>>need;

 switch (need)
 {
 case 100: cout << (m/100)<<" " <<"notes are used"<< endl;
             break;  
 

 case 50: cout << (m/50)<<" "<<"notes are used" << endl;
             break; 
             
             
 case 20: cout << (m/20)<<" " <<"notes are used" << endl;
             break; 
             
             
 case 1: cout << (m/1)<< " "<<"notes are used" << endl;
             break; 
             
             
 default:
  break;
 }

}