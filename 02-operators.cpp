#include<iostream>
using namespace std;

int main (){ 

//operators

/*
1)Arithmetic Operators 
Used for mathematical calculations.*/

int a = 10;
int b = 5;

cout << a+b << endl;
cout << a-b << endl;
cout << a/b << endl;
cout << a%b << endl;


/*
2. Relational (Comparison) Operators

Used to compare two values. 
==	Equal to
!=	Not equal to
>	Greater than
<	Less than
>=	Greater than or equal to
<=	Less than or equal to*/

cout << (a>b) << endl;
cout << (a<b) << endl;
cout << (a<=b) << endl;
cout << (a>=b) << endl;

/*
3. Logical Operators 
Used to combine conditions.
and : && 
or : ||
not : ! 
*/

int age = 19;

cout << (age >= 21 && age >= 13) << endl;
cout << !age << endl;

/*
4. Assignment Operators 
Used to assign values.
=,+=,-=,*=,/=
*/
int c = 5;
c += 2;
cout << c << endl;

int c1 = 5;
c1 -= 2;
cout << c1 << endl;

int c2 = 5;
c2 /= 2;
cout << c2 << endl;

int c3 = 5 ;
c3 %= 2;
cout << c3 << endl;

int c4 = 5;
c4 *= 2;
cout << c4 << endl;

int c5 = 5;
c5 ++ ;
cout << c5 << endl;

int c6 = 5;
c6 -- ;
cout << c6 << endl;

 
 




}