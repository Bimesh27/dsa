#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int s, int e, int m){
   int i = s, j = m+1;
   vector<int> temp;

   while(i <= m && j <= e) {
      if(arr[i] <= arr[j]) {
         temp.push_back(arr[i]);
         i++;
      }else {
         temp.push_back(arr[j]);
         j++;
      }
   }

   while(i <= m) {
      temp.push_back(arr[i]);
      i++;
   }

   while(j <= e) {
      temp.push_back(arr[j]);
      j++;
   }

   for(int idx = 0; idx < temp.size(); idx++) {
      arr[idx+s] = temp[idx];
   }

}

void mergeSort(vector<int> &arr, int s, int e){
   if(s < e) {
      int m = s + (e - s) / 2;
      mergeSort(arr, s, m);
      mergeSort(arr, m+1, e);

      merge(arr, s, e, m);
   }
}

int main(){
   vector<int> arr = {12, 31, 35, 8, 32, 17};

   mergeSort(arr, 0, arr.size()-1);
   
   for(int val: arr) {
      cout << val << " ";
   }

   cout << endl;

   return 0;
}