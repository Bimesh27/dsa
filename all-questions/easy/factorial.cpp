#include<iostream>
using namespace std;

int facto(int n){
   if(n == 1 || n == 0) {
      return 1;
   }

   return n * facto(n-1);
   
}

int main(){
   int n = 5;
   cout << "Factorial of " << n << "is " << facto(n) << endl;

   return 0;
}