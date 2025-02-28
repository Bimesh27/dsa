#include <iostream>
#include <vector>
using namespace std;

vector<string> findRelativeRank(vector<int> &score, vector<string> &ans,
                                int n) {
    int currElemRank = n;
    for (int idx = 0; idx < n; idx++) {
        currElemRank = n;
        for (int j = 0; j < n; j++) {
            if (score[idx] > score[j]) {
                currElemRank -= 1;
            }
            if (j == n - 1) {
                if (currElemRank == 1) {
                    ans.push_back("Gold Medal");
                } else if (currElemRank == 2) {
                    ans.push_back("Silver Medal");
                } else if (currElemRank == 3) {
                    ans.push_back("Bronze Medal");
                } else {
                    ans.push_back(to_string(currElemRank));
                }
            }
        }
    }

    return ans;
}

int main() {
    vector<int> score = {5, 4, 3, 2, 1};
    vector<string> ans;
    int n = score.size();

    findRelativeRank(score, ans, n);

    for (auto a : ans) {
        cout << a << " ";
    }

    cout << endl;

    return 0;
}