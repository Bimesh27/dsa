#include <iostream>
using namespace std;

void printSubset(string &str, string ans, int i) {
    if (i == str.length()) {
        cout << ans << endl;
        return;
    }

    printSubset(str, ans + str[i], i + 1);

    printSubset(str, ans, i + 1);
}

int main() {
    string str = "abc";
    string ans = "";
    printSubset(str, ans, 0);

    return 0;
}