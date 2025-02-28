#include<iostream>
#include<vector>
using namespace std;

// O(logn)
// O(logn)
int peakIndex(vector<int> arr, int s, int e) {
   if(s == e) {
      return s;
   }

   int m = s+ (e - s) / 2;
   if(m > 0 && m < arr.size()-1 && arr[m] > arr[m-1] && arr[m] > arr[m+1]) {
      return m;
   }
   
   if(m >0 && arr[m] > arr[m-1]) {
      return peakIndex(arr, m+1, e);
   } else {
      return peakIndex(arr, s, m-1);
   }

}

int main(){
   vector<int> arr = {4, 10, 8, 6, 7, 1, 5};
   cout << peakIndex(arr, 0, arr.size()-1);
   return 0;
}