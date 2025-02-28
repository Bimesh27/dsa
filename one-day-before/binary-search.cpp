#include <iostream>
#include <vector>
using namespace std;


//time complexity -> O(logn)
//space complexity-> O(logn)

int binarySearch(vector<int> arr, int target, int s, int e) {

    if (s <= e) {
        int m = s + (e - s) / 2;
        if (arr[m] == target) {
            return m;
        }

        if (target < arr[m]) {
            return binarySearch(arr, target, s, m - 1);
        } else {
            return binarySearch(arr, target, m + 1, e);
        }
    }

    return -1;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 11;

    cout << binarySearch(arr, target, 0, arr.size() - 1) << endl;

    return 0;
}