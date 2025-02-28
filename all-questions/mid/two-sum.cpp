#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> arr, int target, vector<int> &ans,
                   unordered_map<int, int> &m, int i) {
    if (i < arr.size()) {
        int currNum = arr[i];
        int noToFind = target - currNum;

        if (m.find(noToFind) != m.end()) {
            ans.push_back(i);
            ans.push_back(m[noToFind]);

            return ans;
        }

        m[currNum] = i;
        return twoSum(arr, target, ans, m, i + 1);
    }

    return ans;
}

int main() {
    vector<int> arr = {4, 6, 7, 9, 13};
    int target = 17;
    vector<int> ans;
    unordered_map<int, int> m;
    twoSum(arr, target, ans, m, 0);

    for (int val : ans) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}