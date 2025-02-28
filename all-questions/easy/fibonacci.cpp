#include<iostream>
using namespace std;

int fibo(int n){
   if(n == 1 || n == 0) {
      return n;
   }
   
   return fibo(n - 2) + fibo(n - 1);
}
// 0, 1, 1, 2, 3, 5, 8
int main(){
   int n = 6;
   cout << fibo(n) << endl;

   return 0;
}