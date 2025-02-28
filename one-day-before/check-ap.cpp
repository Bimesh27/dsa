#include <iostream>
#include <vector>
using namespace std;

//time complexity -> O(n)
//space complexity -> O(n);

bool checkAP(vector<int> arr, int d, int i) {
    if (i == arr.size()) {
        return true;
    }

    if (arr[i] - arr[i - 1] != d) {
        return false;
    } else {
        return checkAP(arr, d, i + 1);
    }
}

int main() {
    vector<int> arr = {2, 6, 10, 14, 18, 22};
    int d = arr[1] - arr[0];

    cout << checkAP(arr, d, 1) << endl;

    return 0;
}