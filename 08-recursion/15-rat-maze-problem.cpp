#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isSafe(int xAxis, int yAxis, int n, vector<vector<int>>visited,vector<vector<int>> &m ){
  if((xAxis >= 0 && xAxis < n) &&(yAxis>=0 && yAxis<n)&&(visited[xAxis][yAxis] == 0)&&(m[xAxis][yAxis] == 1)){

    return true;

  }
  else{
    return false;
  }
}
void solve(vector<vector<int>> &m,int n,vector<string> &ans,
  int xAxis,int yAxis,vector<vector<int>>&visited,string &path){
//base case
if(xAxis == n-1 && yAxis == n-1){
  ans.push_back(path);
  return; 
}
visited[xAxis][yAxis] = 1;
//going down
int newx = xAxis+1;
int newy = yAxis;
if(isSafe(newx,newy,n,visited,m)){
path.push_back('D');
solve(m,n,ans,newx,newy,visited,path);
//backtracking
path.pop_back();
}
//going left
newx = xAxis;
newy = yAxis-1;
if(isSafe(newx,newy,n,visited,m)){
path.push_back('L');
solve(m,n,ans,newx,newy,visited,path);
//backtracking
path.pop_back();
}
// going up
newx = xAxis-1;
newy = yAxis;
if(isSafe(newx,newy,n,visited,m)){
path.push_back('U');
solve(m,n,ans,newx,newy,visited,path);
//backtracking
path.pop_back();
}

//going right
newx = xAxis;
newy = yAxis+1;
if(isSafe(newx,newy,n,visited,m)){
path.push_back('R');
solve(m,n,ans,newx,newy,visited,path);
//backtracking
path.pop_back();
}

visited[xAxis][yAxis] = 0;

}
vector<string> findPath(vector<vector<int>> &m, int n){
  vector<string> ans;
  int xAxis = 0;
  int yAxis = 0;
  vector<vector<int>>visited = m;
   //initialise with 0
   //creating 2d array 
   for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      visited[i][j] = 0;
    }
   }
   string path = "";
   solve(m,n,ans,xAxis,yAxis,visited,path);
   sort(ans.begin(),ans.end());
   return ans;
}

int main(){
  int n = 4;

    vector<vector<int>> m = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    vector<string> ans = findPath(m, n);

    if(ans.empty()){
        cout << "No path found" << endl;
    }
    else{
        cout << "Possible paths: " << endl;

        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << ",";
        }
    }

  return 0;
}