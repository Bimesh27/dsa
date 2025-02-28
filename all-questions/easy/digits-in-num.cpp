#include<iostream>
using namespace std;

void digits(int &n){
   if(n != 0) {
      int digit = n % 10;
      n = n/10;
      digits(n);
      cout << digit << endl;
   }
}

int main(){
   int n = 345;
   digits(n);

   return 0;
}