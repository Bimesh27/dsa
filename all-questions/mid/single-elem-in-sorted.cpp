#include<iostream>
#include<vector>
using namespace std;

int singleElement(vector<int> arr, int s, int e, int n){
   if(arr.size() == 1) {
      return arr[0];
   }

   int mid = s + (e - s) / 2;
   if((mid == 0 && arr[mid] != arr[mid+1])) {
      return arr[mid];
   }

   if(mid ==  n && arr[mid] != arr[mid-1]) {
      return arr[mid];
   }

   if(arr[mid-1] != arr[mid] && arr[mid] != arr[mid+1]) {
      return arr[mid];
   }

   if(mid % 2 == 0) {
      if(arr[mid-1] == arr[mid]) {
         return singleElement(arr, s, mid-1, n);
      } else { 
         return singleElement(arr, mid+1, e, n);
      }
   } else {
      if(arr[mid] == arr[mid-1]) {
         return singleElement(arr, mid+1, e, n);
      } else {
         return singleElement(arr, s, mid-1, n);
      }
   }
   
   return -1;  
}

int main(){
   vector<int> arr = {3, 3, 2, 2, 5, 5, 7};
   cout << singleElement(arr, 0, arr.size()-1, arr.size()-1) << endl;

   return 0;
}