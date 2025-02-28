#include<iostream>
using namespace std;

// string remove_occurrence(string s, string part){
//    if(s.find(part) == string::npos) {
//       return s;
//    }

//    s.erase(s.find(part), part.length());

//    return remove_occurrence(s, part);
// }

string remove_occurrence(string s, string part) {
   while (s.find(part) != string::npos) {
      s.erase(s.find(part), part.length());
   }
   return s;
}

int main(){
   string s = "daabcbaabcbc";
   string part = "abc";

   cout << remove_occurrence(s, part) << endl; 
   return 0;
}