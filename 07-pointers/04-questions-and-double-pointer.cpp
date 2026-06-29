#include<iostream>
using namespace std;

void update (int *p){
  *p = *p * 2;
}

int main(){
/*
  int first = 6;
  int *p = &first;

  int *q = p;
  (*q)++;

  cout << first <<endl;

  int s = 8;
  int *p2 = &s;

  cout << (*p2)++ << endl;

  cout << s << endl;

  int *p = 0;
  int first = 110;
  *p = first;
  cout << *p << endl; //error

int f = 8;
int s = 11;
int *t = &s;
f = *t;
*t = *t + 2;

cout << f << " " << s << endl;

float f = 12.5;
float s = 21.5;
float *p = &f;

(*p)++;
*p = s;
cout << f << endl;
cout << s << endl;
cout << *p << endl;



int arr[5];
int *p;

cout << sizeof(arr) << endl;
cout << sizeof(p) << endl;
 
int arr[] = {11,21,13,14};
cout << *(arr) << endl;
cout << *(arr + 1);

int arr[6] = {11,12,13};
cout << arr << endl;
cout << &arr << endl; 


int arr[6] = {11, 21, 13};
cout << arr << endl;
cout << (arr + 1) << endl;
 
int arr[6] = {11, 21, 31};
int *p = arr;
cout << p[2]/*sme as *(p + 2) <<endl;



int arr[] = {11,12,13,14,15};
cout << *(arr) << " " << *(arr +3) << endl;

int arr[] = {2,4,6,7,8};
int *ptr = arr++;
cout << *ptr << endl; //error


char ch = 'a';
char *p = &ch;
ch++;
cout << *p << endl;

char arr[] = "abcde";
char *p = &arr[0];
cout << p << endl; // puri string print ho gii address print nahi ho gaa 

char arr[] = "abcde";
char *p =  &arr[0];
p++; // p points to (b) 
cout << p << endl; // bcde



char str[] = "anuj";
char *p = str;
cout << str[0] << endl;
cout << p[0] << endl;

int i = 10;
update(&i);
cout << i << endl;


int f = 110;
int *p = &f;
int **q = &p;

int second = (**q)++ + 9;
cout << f << endl; // 111
cout << second << endl; // 119

*/

int f = 100;
int *p = &f;
int **q = &p;

int s = ++(**q); // pre increment
int *r = *q; // *q = value inside p.
//inside p address of f
++(*r); // pre increment

cout << f << endl; //102
cout << s << endl; //101
return 0;
}