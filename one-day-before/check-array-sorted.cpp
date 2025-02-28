#include <iostream>
#include <vector>
using namespace std;

//time complexity -> O(n)
//space complexity -> O(n)

bool isSorted(vector<int> &arr, int i) {
    if (i == arr.size() - 1 || arr.size() == 0) {
        return true;
    }

    if (arr[i] > arr[i + 1]) {
        return false;
    } else {
        return isSorted(arr, i + 1);
    }
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 4, 5, 5};
    cout << isSorted(arr, 0) << endl;

    return 0;
}