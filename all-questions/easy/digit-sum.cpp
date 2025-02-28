#include<iostream>
using namespace std;

int digitSum(int num, int sum){
   if(num > 0) {
      int digit = num % 10;
      sum += digit;

      return digitSum(num/10, sum);
   }

   return sum;
}

int main(){
   int num = 2345; 

   cout << "Sum is : " << digitSum(num, 0) << endl;

   return 0;
}