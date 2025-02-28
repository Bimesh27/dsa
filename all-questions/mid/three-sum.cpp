#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int> &arr, vector<vector<int>> &ans, int n){
   for(int i = 0; i < n; i++) {
      int j = i+1, k = n-1;
      
      if(i > 0 && arr[i] == arr[i-1]) {
         continue;
      }

      while(j < k) {
         int sum = arr[i] + arr[j] + arr[k];

         if(sum < 0) {
            j++;
         } else if(sum > 0) {
            k--;
         } else {
            ans.push_back({arr[i], arr[j], arr[k]});
            j++;
            k--;

            while(j < k && arr[j] == arr[j-1]) {
               j++;
            }

            while(j < k && arr[k] == arr[k+1]) {
               k--;
            }
         }
      }
   }

   return ans;
}

int main(){
   vector<int> arr = {-1, 0, 1, 2, -1 , -4};
   sort(arr.begin(), arr.end());
   vector<vector<int>> ans;

   threeSum(arr, ans, arr.size());

   for(auto a : ans) {
      for(auto val : a) {
         cout << val << "  ";
      }
      cout << endl;
   }

   return 0;   
}