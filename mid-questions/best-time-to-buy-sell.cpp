#include<iostream>
#include<vector>
using namespace std;

//time complexity O(n)
//space complexity O(n)

int bestBuySell(vector<int> &prices, int n, int i, int bestBuy, int maxProfit){
   if(i >= n) {
      return maxProfit;
   }

   if(prices[i] > bestBuy) {
      maxProfit = max(maxProfit, prices[i] - bestBuy);
   }

   bestBuy = min(prices[i], bestBuy);

   return bestBuySell(prices, n, i+1, bestBuy, maxProfit);

}

int main(){
   vector<int> prices = {7, 1, 5, 3, 6, 4};
   cout << bestBuySell(prices, prices.size(), 1, prices[0], 0) << endl;
   return 0;
}