#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> &nums, int target) {
    int i = 0;
    int j = nums.size() - 1;
    vector<int> ans;

    
    while (i < j) {
        int sum = nums[i] + nums[j];

        if (sum > target) {
            j--;
        } else if (sum < target) {
            i++;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 13;

    vector<int> ans = pairSum(nums, target);
    

    for (int a : ans) {
        cout << a ;
    }

    cout << endl;

    return 0;
}