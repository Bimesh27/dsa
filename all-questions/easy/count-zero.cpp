#include<iostream>
using namespace std;

int countZero(int num, int count = 0) {
   if (num == 0) {
       return (count == 0) ? 1 : count;  // If input was 0, return 1
   }

   if(num % 10 == 0 ) {
      count ++;
   }

   return countZero(num / 10, count);
}

int main() {
   cout << countZero(30000) << endl;  // Output: 4
   return 0;
}
