# include<iostream>
using namespace std ;

int main () {

  cout<<"Hello Anuj!! \n Welcome to DSA series in c++" << endl ;

  cout<<"Datatypes in c++"<< endl;

  /*
  Integer = ((int : (4 bytesStores))
   whole numbers.
    E.g., int count = 50;
  */

  int a = 123;
  cout << a << endl ;
  int sizeA = sizeof(a);
  cout<< sizeA << endl ;
  /*Floating Point = (float)
  4 bytesStores 
  fractional numbers up to 7 decimal digits.
  E.g., float pi = 3.14f;*/
  float b = 12.67;
  cout << b << endl ;
  int sizeB = sizeof(b);
  cout << sizeB << endl;
  /*Double Floating Point = (double)
  8 bytesStores
  fractional numbers up to 15 decimal digits.
  E.g., double price = 99.99;*/
  double c = 987.99;
  cout << c << endl ;
  int sizeC = sizeof(c);
  cout << sizeC << endl;

/*Size: Usually 1 byte
Values are enclosed in single quotes ('A', 'B', '1')
Internally stores the ASCII value of the character*/

  char d = 'a';
  cout << d << endl ;
  int sizeD = sizeof(d);
  cout << sizeD << endl;

/*Size: Usually 1 byte
Possible values:
true (represented as 1)
false (represented as 0)
Commonly used in conditions and decision-making*/

  bool bl = true ;
  cout << bl << endl ;
  int sizeE = sizeof(bl);
  cout << sizeE << endl;


 // type casting

 int i = 'i';
 cout << a << endl;

char ch = 12345;
cout << ch << endl;



}