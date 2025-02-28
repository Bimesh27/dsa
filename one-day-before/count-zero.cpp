#include <iostream>
using namespace std;

// time complexity -> O(logn)
// space complexity -> O(logn)

int zeroCount(int num, int count) {
    if (num == 0) {
        return count;
    }

    if (num % 10 == 0) {
        count++;
    }
    return zeroCount(num / 10, count);
}

int main() {
    int num = 0;
    if(num == 0) {
        cout << 1 << endl;
    } else {
        cout << zeroCount(num, 0) << endl;
    }

    return 0;
}