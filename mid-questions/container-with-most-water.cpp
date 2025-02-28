#include<iostream>
#include<vector>
using namespace std;

//time complexity == O(n)
//space complexity == O(n)
int mostWater(vector<int> height, int lp, int rp, int maxWater){
   if(lp < rp) {
      int w = rp - lp;
      int ht = min(height[rp], height[lp]);
      int area = ht * w;

      maxWater = max(area, maxWater);

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
   cout << mostWater(height, 0, height.size()-1, 0) << endl;

   return 0;
}