#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printUniqueSubset(vector<int> arr, vector<int> &ans, int i) {
   if (i == arr.size()) {
      for (int val : ans) {
         cout << "{" << val << "}";
      }
      cout << endl;
      return;
   }

   ans.push_back(arr[i]);
   printUniqueSubset(arr, ans, i+1);

   ans.pop_back();

   while(i+1 < arr.size() && arr[i] == arr[i+1]) {
      i++;
   }
   
   printUniqueSubset(arr, ans, i+1);
}

int main() {
   vector<int> arr = {1, 2, 2};
   vector<int> ans;  

   sort(arr.begin(), arr.end());
   cout << "Unique subsets are:" << endl;
   printUniqueSubset(arr, ans, 0);

   return 0;
}