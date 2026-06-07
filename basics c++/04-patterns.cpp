#include<iostream>
using namespace std;

int main () {
  //square * pattern 
  /*
  eg:
  ****
  ****
  ****
  ****
  */
  int n;
  cout << "Enter the number :" ;
  cin >> n;

  int i = 1;

  while(i<=n){
    int j = 1;
    while(j<=n){
      cout << "*" ;
      j++;
    }
    cout<<endl;
    i++;
  }

  /*
  pattern
  eg: 
  1111
  2222
  3333
  4444
  */
   int n1;
  cout << "Enter the number :" ;
  cin >> n1;

  int i1 = 1;

  while(i1<=n1){
    int j1 = 1;
    while(j1<=n1){
      cout << i1 ;
      j1++;
    }
    cout<<endl;
    i1++;
}

/*
1234
1234
1234
1234
*/
    int n2;
    cout << "Enter the number :" ;
    cin >> n2;

    int i2 = 1;

    while(i2<=n2){
      int j2 = 1;
      while(j2<=n2){
        cout << j2 ;
        j2++;
      }
      cout<<endl;
      i2++;
}

/*
1 2 3 4
5 6 7 8
9 10 11 12
*/
    int n3;
    cout << "Enter the number :" ;
    cin >> n3;

    int i3 = 1;
    int count = 1;

    while(i3<=n3){
      int j3= 1;
      while(j3<=n3){
        cout << count <<" "; ;
        count++;
        j3++;
      }
      cout<<endl;
      i3++;
    }

    /*
    *
    **
    ***
    ****
    *****
    */
       int n4;
    cout << "Enter the number :" ;
    cin >> n4;

    int i4 = 1;

    while(i4<=n4){
      int j4 = 1;
      while(j4<=i4){
        cout << "*" " " ;
        j4++;
      }
      cout<<endl;
      i4++;
  }
  /*
  1
  22
  333
  4444
  */
         int n5;
    cout << "Enter the number :" ;
    cin >> n5;

    int i5 = 1;

    while(i5<=n5){
      int j5 = 1;
      while(j5<=i5){
        cout << i5 << " " ;
        j5++;
      }
      cout<<endl;
      i5++;
}

/*
1
2 3
4 5 6
7 8 9 10
*/

         int n6;
    cout << "Enter the number :" ;
    cin >> n6;

    int i6 = 1;
    int count2 = 1;

    while(i6<=n6){
      int j6 = 1;
      while(j6<=i6){
        cout << count2 << " " ;
        count2++;
        j6++;
      }
      cout<<endl;
      i6++;
} 
/*
1
2 1
3 2 1 
4 3 2 1 
*/
         int n7;
    cout << "Enter the number :" ;
    cin >> n7;

    int i7 = 1;
    

    while(i7<=n7){
      int j7 = 1;
      while(j7<=i7){
        cout << i7 - j7 + 1 << " " ;
        
        j7++;
      }
      cout<<endl;
      i7++;
    }
    
}