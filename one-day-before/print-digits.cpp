#include<iostream>
using namespace std;


void printDigits(int nums){
   if(nums > 0) {
      int digit = nums % 10;
      printDigits(nums/10);
      cout << digit << endl;
   }
}

int main(){
   int nums = 345;
   printDigits(nums);
   return 0;
}