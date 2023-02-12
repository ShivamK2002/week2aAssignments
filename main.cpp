#include <iostream>
using namespace std;

bool primeOrNot(int n){
  for(int i=n-1; i>1; i--){
if(n%i==0){
  return false;
}


}
  return true;
    }
// int factorial(int n) {
//   int fact = 1;
//   for (int i = n; i > 0; i--) {
//     fact = fact * i;
//   }
//   return fact;
// }

// float areaOfCircle(float r){
//   return (r*r*3.14159);
// }
// void oddOrEven(int number);
int main() {
  // area of circle
  //  float r;
  //  cout<<"Enter the radius of a circle:"<<endl;
  //  cin>>r;
  //  cout<<areaOfCircle(r)<<endl;
  // odd or even

  // int n;
  // cout<<"Enter the number: "<<endl;
  // cin>>n;
  // oddOrEven(n);

  // int n;
  // cout << "Enter the number: " << endl;
  // cin >> n;
  // cout << "The factorial of " << n << " is " << factorial(n) << endl;

  int n;
  cout << "Enter the number: " << endl;  
  cin>>n;
//   if(primeOrNot(n)){
//     cout<<"Prime"<<endl;
//   }
// else{
//   cout<<"not prime"<<endl;
// }
//for printing all prime till n
  for(int i=2;i<n;i++){
    bool isPrime=primeOrNot(i);
 if(isPrime){
    cout<<i<<endl;
  }
 }
  
  
  return 0;
}

// void oddOrEven(int number){
//   if/*(number%2==0) */(number&1==0)
//   {
//     cout<<"Even Number"<<endl;
//   }
//   else{
//     cout<<"Odd Number"<<endl;
//   }
// }