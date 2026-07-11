#include<iostream>
#include<vector>
#include<string>
using namespace std;
void solve(string digit,string output,int index,vector<string>&ans,string mapping[]){
  //base case
  if(index >= digit.size()){
    ans.push_back(output);
    return;
  }

  //finding the number
  // -'0' because it give the int value from char
  int number = digit[index] - '0';

  //mapping the number
  string value = mapping[number];

  //recursive call
  for(int i = 0; i < value.size(); i++){
    output.push_back(value[i]);
    solve(digit,output,index+1,ans,mapping);
    //backtracking
    output.pop_back();
  }


}
vector<string> letterCombination(string digits){
 
  string output;
  vector<string> ans;
      if(digits.size() == 0){
    return ans;
  }
  int index = 0;
  string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
  solve(digits,output,index,ans,mapping);
 return ans;
}
int main(){
  string digits;

    cout << "Enter the digits (2-9): ";
    cin >> digits;

    vector<string> ans = letterCombination(digits);

    cout << "Letter Combinations are:" << endl;

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << ",";
    }

    cout << endl;

  return 0;
}