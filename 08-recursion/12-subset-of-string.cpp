#include<iostream>
#include<string>
#include<vector>
using namespace std;
void solve(string str,string output,int index, vector<string>&ans){
//base condition
if(index >= str.size()){
  ans.push_back(output);
  return;
}

//exclude
solve(str,output,index+1,ans);

//include
output.push_back(str[index]);
solve(str,output,index+1,ans);
}
void subsequeces(string str){
  vector<string> ans;
  string output = "";
  int index = 0;

  solve(str, output,index, ans);

  //print subsquences
  for(int i = 0; i < ans.size(); i++){
    cout<<"\"" << ans[i] << "\"" <<",";
  }
}
int main(){
  string a = "abcd";
  subsequeces(a);
  return 0;
}