#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int s, int e, int target){
   if(s <= e) {
      int m = s + (e - s) / 2;
      
      if(arr[m] == target) {
         return m;
      }

      if(arr[m] < target) {
         return binarySearch(arr, m+1, e, target);
      } else {
         return binarySearch(arr, s, m-1, target);
      }
   }

   return -1;
}

int main(){
   vector<int> arr = {3, 5, 7, 8, 10};
   int target = 8;

   cout << binarySearch(arr, 0, arr.size() - 1, target) << endl;

   return 0;
}