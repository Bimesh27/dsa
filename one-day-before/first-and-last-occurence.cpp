#include<iostream>
using namespace std;

// ✅ Time Complexity: O(n)
// ✅ Space Complexity: O(n)

int firstOccurence(string str, int i, char elem){
   if(i == str.length()) {
      return -1;
   }
   
   if(str[i] == elem) {
      return i;
   } else {
      return firstOccurence(str, i+1, elem);
   }
}

int lastOccurence(string str, int n, char elem){
   if(n == 0) {
      return -1;
   }
   
   if(str[n] == elem) {
      return n;
   } else {
      return firstOccurence(str, n-1, elem);
   }
}

int main(){
   string str = "bcardfdsa";
   char elem = 'a';

   cout << firstOccurence(str, 0, elem) << endl;
   cout << lastOccurence(str, str.length()-1, elem) << endl;

}