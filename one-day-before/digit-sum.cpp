#include<iostream>
#include<vector>
using namespace std;


//time complexity O(logn)
//space complexity O(logn)
int digitSum(int nums, int sum){
   if(nums > 0) {
      int digit = nums % 10;
      sum += digit;
      
      return digitSum(nums/10, sum);
   }

   return sum;
}

int main(){
   int nums = 1001 ;

   cout << digitSum(nums, 0) << endl;
}