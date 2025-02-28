#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &nums1, vector<int> &nums2, int m, int n,
           int lastIndex) {
    if (n == 0) {
        return;
    }

    if (m == 0) {
        nums1[lastIndex] = nums2[n - 1];
        merge(nums1, nums2, m, n - 1, lastIndex - 1);
        return;
    }

    if (nums1[m - 1] > nums2[n - 1]) {
        nums1[lastIndex] = nums1[m - 1];
        merge(nums1, nums2, m - 1, n, lastIndex - 1);
    } else {
        nums1[lastIndex] = nums2[n - 1];
        merge(nums1, nums2, m, n - 1, lastIndex - 1);
    }
}

int main() {
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;
    merge(nums1, nums2, m, n, m + n - 1);

    for (int n : nums1) {
        cout << n << endl;
    }

    return 0;
}