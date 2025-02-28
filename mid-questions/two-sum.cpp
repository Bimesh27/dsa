#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

//time complexity = O(n)
//space complexity = O(n)

vector<int> twoSum(vector<int> &arr, int target, unordered_map<int, int> &m, int i, vector<int> &ans){
   if(i < arr.size()) {
      int currNum = arr[i];
      int noToFind = target - currNum;

      if(m.find(noToFind) != m.end()) {
         ans.push_back(i);
         ans.push_back(m[noToFind]);

         return ans;
      }
      m[currNum] = i;

      return twoSum(arr, target, m, i+1, ans);
   }

   return ans;
}

int main(){
   vector<int> arr = {4, 6, 7, 9, 13};
   int target = 17;
   unordered_map<int, int> m;
   vector<int> ans;
   twoSum(arr, target, m, 0, ans);

   for(int val: ans) {
      cout << val << endl;
   }


   return 0;
}