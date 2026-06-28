#include<iostream>
using namespace std;


int  main(){

int num = 10;
cout << num << endl;

int *p = &num;
cout << p << endl;
(*p)++;
cout << *p << endl;

//copy the pointer

int *t = p;
t = t +1;
cout << t << endl;
}