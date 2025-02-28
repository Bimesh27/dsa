#include <iostream>
#include <stack>
using namespace std;

bool isValid(string &str, int i, stack<char> &stk) {

    if (i < str.size()) {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
            stk.push(str[i]);
            return isValid(str, i + 1, stk);
        } else if (!stk.empty() && (str[i] == ')' && stk.top() == '(' ||
                                    str[i] == '}' && stk.top() == '{' ||
                                    str[i] == ']' && stk.top() == '[')) {
            stk.pop();
            return isValid(str, i + 1, stk);
        } else {
            return false;
        }
    }

    return stk.size() == 0;
}

int main() {
    string str = "[[]]";
    stack<char> stk;

    cout << isValid(str, 0, stk) << endl;
    return 0;
}