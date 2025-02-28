#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int subarraySum(vector<int> &arr, int k){
   int count = 0, prefixSum = 0;
   unordered_map<int, int> m;
   m[0] = 1;

   for(int num: arr) {
      prefixSum += num;

      if(m.find(prefixSum - k) != m.end()) {
         count += m[prefixSum - k];
      }

      m[prefixSum]++;
   }

   return count;
}

int main(){
   vector<int> arr = {1, 2, 3, 4}; // 1, 3, 6, 10
   int k = 3;

   cout << subarraySum(arr, k) << endl;
   return 0;
}