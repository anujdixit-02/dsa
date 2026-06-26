#include<iostream>
#include<string>
#include <climits>
using namespace std;

char maxOccurrence(char arr[]){
   int freq[26] = {0};
   for(int i = 0; arr[i] != '\0'; i++){
    int index = arr[i] - 'a';// b-a, c-a, d-a....z-a;
    /*so we can count the occurrence of the characters*/
    freq[index]++;
   }

   int maxi = INT_MIN;
   int ans = 0;
   for(int i = 0; i < 26; i++){
    if(freq[i] > maxi){
      maxi = freq[i];
      ans = i;
    }
   }
   return ans + 'a';
}
int main(){
  char arr[100];

    cout << "Enter a lowercase string: ";
    cin >> arr;

    cout << "Maximum occurring character is: "
         << maxOccurrence(arr) << endl;
  return 0;
}