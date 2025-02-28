#include<iostream>
using namespace std;

bool isPrime(int &n, int i){
   if(n < 2) {
      return false;
   }

   if(i * i > n) {
      return true;
   }

   if(n % i == 0) {
      return false;
   }

   return isPrime(n, i+1);
}

int main(){
   int n = 7;
   cout << isPrime(n, 2) << endl;

   return 0;
}