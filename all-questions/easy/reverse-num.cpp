#include<iostream>
#include<climits>
using namespace std;

int reverseNum(int &n, int reversedN){
   if(n != 0) {
      int digit = n % 10;
      if(reversedN > INT_MAX/10 || reversedN < INT_MIN/10) {
         return 0;
      }

      reversedN = (reversedN * 10) + digit;
      n = n/10;
      
      return reverseNum(n, reversedN);
   }  

   return reversedN;
}

int main(){
   int n = 4567;
   cout << reverseNum(n, 0) << endl;

   return 0;
}