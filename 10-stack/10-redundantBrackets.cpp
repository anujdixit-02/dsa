#include<iostream>
#include<stack>
using namespace std;

bool findRedundantBrackets(string &str){

    stack<char> s;

    for(int i = 0; i < str.size(); i++){

        char ch = str[i];

        // Push opening bracket and operators
        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            s.push(ch);
        }

        // Closing bracket found
        else if(ch == ')'){

            bool isRedundant = true;

            while(!s.empty() && s.top() != '('){

                char top = s.top();

                if(top == '+' || top == '-' || top == '*' || top == '/'){
                    isRedundant = false;
                }

                s.pop();
            }

            // Remove '('
            if(!s.empty()){
                s.pop();
            }

            if(isRedundant){
                return true;
            }
          }
    }

    return false;
}

int main(){

    string str;

    cout << "Enter expression: ";
    cin >> str;

    if(findRedundantBrackets(str)){
        cout << "Redundant Brackets Found" << endl;
    }
    else{
        cout << "No Redundant Brackets" << endl;
    }

    return 0;
}