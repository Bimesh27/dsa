#include<iostream>
#include<vector>
#include<climits>
using namespace std;

//kadane algorithm

int maxSubarray(vector<int> &nums){
   int currSum = 0, maxSum = INT_MIN;

   for(int val : nums) {
      currSum += val;
      maxSum = max(currSum, maxSum);

      if(currSum < 0) {
         currSum = 0;
      }
   }

   return maxSum;
   
}

int main(){
   vector<int> nums = {3, -4, 5, 4, -1, 7, -8};
   cout << maxSubarray(nums);
   return 0;
}