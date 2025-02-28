#include<iostream>
using namespace std;

double my_pow(double x, int n){
   if(x == 1 || x == 0) {
      return x;
   }

   if(n == 0) {
      return 1.0;
   }

   if(n < 0) {
      x = 1 / x;
      n = -n;
   }

   double half = my_pow(x, n / 2);
   if(n % 2 == 0) {
      return half * half;
   } else {
      return half * half * x;
   }

}

int main(){
   double x = 4;
   int n = 2;

   cout << my_pow(x, n) << endl;

   return 0;
}