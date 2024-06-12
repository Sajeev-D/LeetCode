#include <stdio.h>

#include <iostream>
#include <vector>
using namespace std;

// This is a nested solution so the complexity is O(n^2)
// class Solution {
//  public:
//   int maxProfit(vector<int>& prices) {
//     int maxDiff = 0;
//     int vecSize = prices.size();
//     int exploreIndex = 0;

//     while (exploreIndex != vecSize) {
//       for (int i = exploreIndex + 1; i < vecSize; i++) {
//         if (prices[i] - prices[exploreIndex] >= maxDiff) {
//           maxDiff = prices[i] - prices[exploreIndex];
//         }
//       }
//       exploreIndex++;
//     }
//     return maxDiff;
//   }
// };

// This is a single pass solution so the complexity is O(n)
// class Solution {
//  public:
//   int maxProfit(vector<int>& prices) {
//     int maxProfit = 0;
//     int minPrice = INT_MAX;

//     for (int i = 0; i < prices.size(); i++) {
//       if (prices[i] < minPrice) {
//         minPrice = prices[i];
//       } else if (prices[i] - minPrice > maxProfit) {
//         maxProfit = prices[i] - minPrice;
//       }
//     }

//     return maxProfit;
//   }
// };
