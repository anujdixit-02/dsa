#include<iostream>
#include<queue>
#include<vector>
using namespace std;

vector<long long> printFristNegativeInteger(long long int a[],long long int n, long long int k){

  deque <long long int> dq;
  vector<long long> ans;

  //process the frist window of k size

  for(int i = 0; i<k; i++){
    if(a[i] < 0){//negative number 
    dq.push_back(i);
  }
}
//store the answer of the first k
if(dq.size() > 0){
  ans.push_back(a[dq.front()]);
}
else{
  //no element in the deque
  ans.push_back(0);
}
//process for remaining windows
for(int i = k; i<n; i++){
  if(!dq.empty() && i-dq.front()>= k){
    //i-dq.front()>= k (k window ke bahar ke hai)
    dq.pop_front();//remove the previous element
  }

  //addition
  if(a[i] < 0){//negative number
    dq.push_back(i);
  }

  //ans store
  if(dq.size() >0){
    ans.push_back(a[dq.front()]);
  }
  else{
    ans.push_back(0);
  }
}
return ans;
}
