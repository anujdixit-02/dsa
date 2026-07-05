#include<iostream>
#include<string>
using namespace std;

void reverseString(string &str, int start, int end){
//base condition
if(start >= end){
  return;
}
//processing 
swap(str[start],str[end]);

//recursive call
reverseString(str,start+1,end-1);
}

bool palindrome(string &str, int start, int end){
  //base case 
  if(start >= end){
    return true;
  }

  if(str[start] != str[end]){
    return false;
  }

  palindrome(str,start+1,end-1);

}

int main(){
string str = "anujdixit";
cout << str<<endl;

reverseString(str,0,str.length()-1);

cout << str<<endl;

if(palindrome(str, 0, str.length() - 1)){
        cout << "String is palindrome";
    }
    else{
        cout << "String is not palindrome";
    }

return 0;
}