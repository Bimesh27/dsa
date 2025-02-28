// Input: num = 38
// Output: 2
// Explanation: The process is
// 38 --> 3 + 8 --> 11
// 11 --> 1 + 1 --> 2
// Since 2 has only one digit, return it.

#include <iostream>
using namespace std;

int addDigits(int &num, int sum) {
    if (num < 10) {
        sum += num;
        if (sum >= 10) {
            return addDigits(sum, 0);
        }
        return sum;
    }

    if (num >= 10) {
        int digit = num % 10;
        sum += digit;
        num = num / 10;
        return addDigits(num, sum); // num = 1 sum = 9;
    }

    return sum;
}

int main() {
    int num = 19;
    cout << addDigits(num, 0) << endl;
    return 0;
}

//constant time  formula =  cout << (num - 1) % 9 + 1 << endl;
