#include<iostream>
using namespace std;


//time complexity -> O(n)
//space complexity -> O(n)
int facto(int n) {
   if(n == 0 || n == 1) {
      return 1;
   }

   return n * facto(n-1);
}

int main(){
   int n = 0;
   cout << facto(n) << endl;
   return 0;
}