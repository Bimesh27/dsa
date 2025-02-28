#include<iostream>
#include<vector>
using namespace std;

vector<int> plusOne(vector<int> &digits, int n) {
   if(digits[n] == 9 && n-1 >= 0) {
      digits[n] = 0;
      return plusOne(digits, n - 1);
   } else if(digits[n] == 9 && n-1 < 0) {
      digits[n] = 1;
      digits.push_back(0);
      return digits;
   } else {
      digits[n] = digits[n] + 1;
      return digits;
   }

}  

int main(){
   vector<int> digits = {9, 9, 9, 9, 9};
   int newDigit = 0;
   plusOne(digits, digits.size()-1);

   for(int val: digits) {
      cout << "[" <<val <<  "]";
   }
   cout << endl;
   return 0;
}