#include <iostream>
#include <vector>
using namespace std;

void storeSubset(vector<int> &arr, vector<int> &ans,
                 vector<vector<int>> &subsets, int i) {
    if (i == arr.size()) {
        subsets.push_back(ans);
        return;
    }

    ans.push_back(arr[i]);
    storeSubset(arr, ans, subsets, i + 1);

    ans.pop_back();
    storeSubset(arr, ans, subsets, i + 1);
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<int> ans;
    vector<vector<int>> subsets;
    storeSubset(arr, ans, subsets, 0);

    for (auto s : subsets) {
        for (auto val : s) {
            cout << val;
        }
        cout << endl;
    }
    return 0;
}