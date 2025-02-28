#include<iostream>
using namespace std;

int firstOccurence(string str, int i, int elem){
   if(i >= str.size()) {
      return -1;
   }

   if(str[i] == elem) {
      return i;
   }

   return firstOccurence(str, i+1, elem);
}

int lastOccurence(string str, int n, int elem){
   if(n < 0) {
      return -1;
   }

   if(str[n] == elem) {
      return n;
   }

   return lastOccurence(str, n-1, elem);
}

int main(){
   string str = "bcardfdsa";
   char elem = 'a';

   cout << "First Occurance: " << firstOccurence(str, 0, elem) << endl;
   cout << "Last Occurance: " << lastOccurence(str, str.size(), elem) << endl;

   return 0;
}