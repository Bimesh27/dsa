#include <iostream>
using namespace std;

bool isValid(string pin, int i) {
   if (i >= pin.size()) {
      return true;
   }

   if(!isdigit(pin[i])) {
      return false;
   }
   return isValid(pin, i + 1);
}

int main() {
   string pin = "234544";
   if (pin.length() != 4 && pin.length() != 6) {
      cout << "False" << endl;
      return 0;
   }

   cout << (isValid(pin, 0) ? "True" : "False") << endl;

   return 0;
}