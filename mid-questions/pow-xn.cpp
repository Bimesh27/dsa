#include<iostream>
using namespace std;

//O(logn)
//O(logn)
double myPow(double x, int n){
   if(x == 0 || x == 1) {
      return x;
   }

   if(n == 0) {
      return 1;
   }

   if(n < 0) {
      x = 1/x;
      n = -n;
   }

   double half = myPow(x, n/2);

   if(n % 2 == 0) {
      return half * half;
   } else {
      return half * half * x;
   }
}

int main(){
   double x = 5;
   int n = -2;
   cout << myPow(x, n) << endl;

   return 0;
}