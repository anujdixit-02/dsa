#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int> &arr, int size, int k, int mid){
  int cowCount = 1;
  int lastPos = arr[0];

  for(int i = 1; i < arr.size(); i++){
    if(arr[i] - lastPos >= mid ){
      cowCount++;
      if(cowCount == k){
        return true;
      }
      lastPos = arr[i];
    }
  }
return false;
}
int aggressiveCows(vector<int> &arr,int size, int k ){
  sort(arr.begin(), arr.end());
  int s = 0;
  int maxi = -1;
  for(int i = 0; i<size; i++){
    maxi = max(maxi,arr[i]);
  }
  int e = maxi;
   int ans = -1;

  int mid = s +(e-s)/2;

  while(s<=e){
    if(isPossible(arr,size,k,mid )){
      ans = mid;
      s = mid +1;
    }
    else{
      e = mid -1;
    }
   mid = s +(e-s)/2; 
  }
  return ans;
}
int main (){
vector<int> arr = {4, 2, 1, 3, 6};   // Example stalls

    int k = 2;

    cout << "Maximum minimum distance is : "
         << aggressiveCows(arr, arr.size(), k)
         << endl;

    return 0;
}