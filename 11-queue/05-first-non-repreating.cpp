#include<iostream>
#include<queue>
#include<string>
#include <unordered_map>
using namespace std;

string firstNonRepeating(string s){
unordered_map<char,int> count;
queue<char> q;
string ans = "";

//treverse the string 
for(int i = 0; i <s.size(); i++){
char ch = s[i];
count[ch]++;
q.push(ch);


//check the front value 
while(!q.empty() && count[q.front()] >1){
    //repeating element
    q.pop();
}
    if(q.empty()){
  ans.push_back('#');
}
else{
    ans.push_back(q.front());
 
  } 
}
return ans;
}
int main(){

    string s;

    cout << "Enter the string: ";
    cin >> s;

    string ans = firstNonRepeating(s);

    cout << "Answer: " << ans << endl;

    return 0;
}