#include<iostream>
#include<vector>
using namespace std;

// O(n)
//O(1);
int maxSubarray(vector<int> nums) {
   int currSum = 0; 
   int maxSum = 0;

   for(int num : nums) {
      currSum += num;
      maxSum = max(maxSum, currSum);

      if(currSum < 0) {
         currSum = 0;
      }
   }
   return maxSum;

}

int main(){
   vector<int> nums = {3, -4, 5, 4, -1, 7, -8};
   cout << maxSubarray(nums) << endl;
   return 0;
}