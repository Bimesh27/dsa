#include <iostream>
using namespace std;

bool isHappy(int n) {
   if(n == 1) {
      return true;
   }

   if(n == 4) {
      return false;
   }

   int sum = 0;
   while (n > 0) {
      int digit = n % 10;
      sum += digit * digit;
      n = n / 10;
   }

   return isHappy(sum);
}

int main() {
   // int n = 19;
   // int n = 7;
   int n = 5;
   // int n = 11;

   cout << isHappy(n) << endl;
   // cout << 7 % 10;

   return 0;
}