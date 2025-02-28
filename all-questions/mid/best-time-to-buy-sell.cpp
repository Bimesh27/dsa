#include <iostream>
#include <vector>
using namespace std;

int bestBuySell(vector<int> prices, int n, int i, int bestBuy, int maxProfit) {
   if (i >= n) {
      return maxProfit;
   }

   if (prices[i] > bestBuy) {
      maxProfit = max(maxProfit, prices[i] - bestBuy);
   }

   bestBuy = min(bestBuy, prices[i]);

   return bestBuySell(prices, n, i + 1, bestBuy, maxProfit);
}

int main() {
   vector<int> prices = {7, 1, 5, 3, 6};
   cout << bestBuySell(prices, prices.size(), 1, prices[0], 0) << endl;
   
   return 0;
}