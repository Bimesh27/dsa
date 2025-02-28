#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> coins = {10, 1, 25, 5, 50};

int minCoins(int N, int index) {
    if (N == 0) return 0;
    if (index >= coins.size()) return 1e9; 

    if (N >= coins[index]) {
        return min(1 + minCoins(N - coins[index], index), minCoins(N, index + 1));
    }

    return minCoins(N, index + 1);
}

int main() {
    int N = 37;
    sort(coins.rbegin(), coins.rend()); // Sorting in descending order
    cout << "Minimum Coins Required: " << minCoins(N, 0) << endl;
    return 0;
}
