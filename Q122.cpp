// #include <iostream>
// #include <vector>
// using namespace std;

// // First try

// // class Solution {
// //  public:
// //   int maxProfit(vector<int>& prices) {
// //     int size = prices.size();
// //     int bought = prices[0];
// //     int sold = -1;
// //     int profit = 0;

// //     for (int i = 0; i < size - 1;) {
// //       if (prices[i] > prices[i + 1]) {
// //         bought = prices[i + 1];
// //         i++;
// //       }

// //       else if (prices[i] < prices[i + 1]) {
// //         int k;
// //         for (k = i; k < size - 1; k++) {
// //           if (prices[k] > prices[k + 1]) {
// //             break;
// //           }
// //         }
// //         if (k == size - 2)
// //           sold = prices[k + 1];
// //         else
// //           sold = prices[k];
// //         if (bought != -1) {
// //           profit += sold - bought;
// //         }
// //         i = k + 1;
// //       }
// //     }

// //     return profit;
// //   }
// // };

// // More optimized solution: jUst get the +ve subtractions!

// class Solution {
//  public:
//   int maxProfit(vector<int>& prices) {
//     int profit = 0;
//     for (int i = 1; i < prices.size(); i++) {
//       if (prices[i] > prices[i - 1]) profit += prices[i] - prices[i - 1];
//     }
//     return profit;
//   }
// };

// int main() {
//   vector<int> a = {6, 1, 3, 2, 4, 7};
//   Solution s1;
//   s1.maxProfit(a);

//   return 0;
// }