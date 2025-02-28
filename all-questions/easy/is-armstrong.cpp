#include<iostream>
using namespace std;

bool isArmstrong(int n, int sum, int originalN){
   if(n != 0) {
      int digit = n % 10;
      sum += digit * digit * digit;
      n = n / 10;
      return isArmstrong(n, sum, originalN);
   }

   return originalN == sum;
}


int main(){
   int n = 153;
   cout << isArmstrong(n, 0, n) << endl;;
}