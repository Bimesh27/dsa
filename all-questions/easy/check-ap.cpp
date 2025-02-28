#include <iostream>
#include <vector>
using namespace std;

bool checkAP(vector<int> &arr, int d, int i) {
   if (i == arr.size() - 1) {
      return true;
   }

   if (arr[i + 1] - arr[i] != d) {
      return false;
   }

   return checkAP(arr, d, i + 1);
}

int main() {
   vector<int> arr = {2, 3, 4, 5, 6};
   if (arr.size() < 2) {
      cout << "True" << endl;
      return 0;
   }
   int d = arr[1] - arr[0];

   cout << checkAP(arr, d, 0) << endl;
   return 0;
}