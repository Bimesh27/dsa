#include<iostream>
using namespace std;

// Time Complexity: O(log n)
// ✅ Space Complexity: O(log n)

bool isArmstring(int n, int copyN, int sum) {
   if(n > 0) {
      int digit = n % 10;
      sum += digit * digit * digit;

      return isArmstring(n/10, copyN, sum);
   }

   return sum == copyN;
}

int main(){
   int n = 1543;
   cout << isArmstring(n, n, 0) << endl;
   return 0;
}