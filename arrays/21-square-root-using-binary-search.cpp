 #include<iostream>
 using namespace std;

 long long int squareRoot(int n){
  long long int ans;
  int s =0;
  int e = n;
  long long int mid = s +(e-s)/2;
while(s <= e){
//what if int range is expand by multiply the int*int
// so we have to change int from long long int
  long long int square = mid*mid;

  if(square == n ){
    return mid;
  }
  else if(square < n){
    ans = mid;
    s = mid +1;
  }
  else{
    e = mid -1;
  }
  mid = s +(e-s)/2;
}
return ans ;
 }
 double decimalSolution(int n, int decimal, int solution ){
  double factor = 1;
  double ans = solution ;

  for (int i = 0; i<decimal; i++){
    factor = factor/10;
    for(double j = ans; j*j < n;
    j=j+factor){
      ans =j;
    }
  }
  return ans ;
 }
 int main (){
  int n ;
  cout << "Enter the number : ";
  cin >> n;
  int solution  = squareRoot(n);
cout<< "square root of the number is : "<<  decimalSolution(n,3,solution)<< endl;
 }