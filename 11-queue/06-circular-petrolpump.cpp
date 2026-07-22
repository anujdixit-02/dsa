#include<iostream>
using namespace std;

class petrolPump{
public:
    int petrol;
    int distance;
};
int tour(petrolPump p[], int n){
  int deficit = 0;
  int balance = 0;
  int start = 0;

  for(int i=0; i<n; i++){
    balance += p[i].petrol - p[i].distance;
    if(balance < 0){
      deficit += balance;
      start = i+1;
      balance = 0;
    }
  }
  if(deficit + balance >= 0){
    return start;
  }
  else{
    return -1;
  }
}
int main(){

    int n;

    cout << "Enter number of petrol pumps: ";
    cin >> n;

    petrolPump p[n];

    cout << "Enter petrol and distance for each petrol pump:\n";

    for(int i = 0; i < n; i++){
        cout << "Pump " << i + 1 << ": ";
        cin >> p[i].petrol >> p[i].distance;
    }

    int ans = tour(p, n);

    if(ans == -1){
        cout << "No possible starting point." << endl;
    }
    else{
        cout << "Start from petrol pump : " << ans+1 << endl;
    }

    return 0;
}