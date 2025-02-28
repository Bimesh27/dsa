#include<iostream>
#include<vector>
using namespace std;

int mostWater(vector<int> height, int lp, int rp, int &maxWater){
   if(lp < rp) {
      int w = rp - lp;
      int ht = min(height[lp], height[rp]);
      int area = ht * w;
      maxWater = max(maxWater, area);

      if(height[lp] < height[rp]) {
         return mostWater(height, lp+1, rp, maxWater);
      } else {
         return mostWater(height, lp, rp-1, maxWater);
      }
   }

   return maxWater;
}

int main(){
   vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
   int maxWater = 0;

   cout << mostWater(height, 0, height.size()-1, maxWater) << endl;

   return 0;
}