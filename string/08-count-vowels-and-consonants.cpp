#include<iostream>
#include<string>
using namespace std;

void countVC(char arr[]){
  int countVowels = 0;
  int countConsonants = 0;
  for (int i = 0; arr[i] != '\0'; i++){
    if((arr[i] >= 'a' && arr[i] <= 'z') ||
   (arr[i] >= 'A' && arr[i] <= 'Z'))
{
    if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' ||
       arr[i] == 'o' || arr[i] == 'u' ||
       arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' ||
       arr[i] == 'O' || arr[i] == 'U')
    {
        countVowels++;
    }
    else
    {
        countConsonants++;
    }
}
  }
  cout << "number of vowels is : " << countVowels <<endl;
  cout << "number of consonants is : " << countConsonants << endl;
}
int main(){
char arr[100];

    cout << "Enter a string: ";
    cin >> arr;

  countVC(arr);

  return 0;
}