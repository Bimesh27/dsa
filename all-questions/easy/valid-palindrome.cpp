#include<iostream>
#include<cctype> // 
using namespace std;

bool is_palindrome(string str, int s, int e){
   if(s >= e) {
      return true;
   }

   if(!isalnum(str[s])) {
      return is_palindrome(str, s+1, e);
   }

   if(!isalnum(str[e])) {
      return is_palindrome(str, s, e-1);
   }

   if(tolower(str[s]) != tolower(str[e])) {
      return false;
   } else {
      return is_palindrome(str, s+1, e-1);
   }

   return true;
}

int main(){
   string str = "aba&&&&";  
   cout << is_palindrome(str,0, str.size()-1) << endl;
   return 0; 
}