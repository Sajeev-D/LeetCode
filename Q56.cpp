// #include <stdio.h>

// #include <iostream>
// #include <vector>

// using namespace std;

// class Solution {
//  public:
//   vector<vector<int>> merge(vector<vector<int>>& intervals) {
//     int numIntervals = intervals.size();
//     int intervalToInvestigate = 0;

//     while (intervalToInvestigate != numIntervals) {
//       for (int i = 0; i < numIntervals; i++) {
//         if (intervalToInvestigate <= i) {
//           if (intervals[i][0] <= intervals[intervalToInvestigate][1] &&
//               intervals[i][1] >= intervals[intervalToInvestigate][0] &&
//               intervals[i][0] >= intervals[intervalToInvestigate][0] &&
//               intervals[i][1] >= intervals[intervalToInvestigate][1] &&
//               intervals[i][0] != -1 && i != intervalToInvestigate) {
//             intervals[intervalToInvestigate][1] = intervals[i][1];
//             intervals[i][1] = -1;
//             intervals[i][0] = -1;
//           } else if (intervals[i][0] <= intervals[intervalToInvestigate][1]
//           &&
//                      intervals[i][1] >= intervals[intervalToInvestigate][0]
//                      && intervals[i][0] <=
//                      intervals[intervalToInvestigate][0] && intervals[i][1]
//                      >= intervals[intervalToInvestigate][1] &&
//                      intervals[i][0] != -1 && i != intervalToInvestigate) {
//             intervals[intervalToInvestigate][1] = intervals[i][1];
//             intervals[intervalToInvestigate][0] = intervals[i][0];
//             intervals[i][1] = -1;
//             intervals[i][0] = -1;
//           }
//         }

//         else if (intervalToInvestigate > i) {
//           if (intervals[intervalToInvestigate][0] <= intervals[i][0] &&
//               intervals[intervalToInvestigate][1] == intervals[i][1] &&
//               intervals[i][0] != -1 &&
//               intervals[intervalToInvestigate][1] != -1) {
//             intervals[i][0] = -1;
//             intervals[i][1] = -1;
//           } else if (intervals[intervalToInvestigate][0] <= intervals[i][0]
//           &&
//                      intervals[intervalToInvestigate][1] <= intervals[i][1]
//                      && intervals[intervalToInvestigate][1] >=
//                      intervals[i][0] && intervals[i][0] != -1 &&
//                      intervals[intervalToInvestigate][1] != -1) {
//             intervals[intervalToInvestigate][1] = intervals[i][1];
//             intervals[i][1] = -1;
//             intervals[i][0] = -1;
//           } else if (intervals[intervalToInvestigate][0] >= intervals[i][0]
//           &&
//                      intervals[intervalToInvestigate][1] <= intervals[i][1]
//                      && intervals[i][0] != -1 &&
//                      intervals[intervalToInvestigate][1] != -1) {
//             intervals[intervalToInvestigate][0] = intervals[i][0];
//             intervals[intervalToInvestigate][1] = intervals[i][1];
//             intervals[i][0] = -1;
//             intervals[i][1] = -1;
//           }
//         }
//       }
//       intervalToInvestigate++;
//     }

//     intervalToInvestigate = 0;

//     while (intervalToInvestigate != numIntervals) {
//       for (int i = 0; i < numIntervals; i++) {
//         if (intervalToInvestigate <= i) {
//           if (intervals[i][0] <= intervals[intervalToInvestigate][1] &&
//               intervals[i][1] >= intervals[intervalToInvestigate][0] &&
//               intervals[i][0] >= intervals[intervalToInvestigate][0] &&
//               intervals[i][1] >= intervals[intervalToInvestigate][1] &&
//               intervals[i][0] != -1 && i != intervalToInvestigate) {
//             intervals[intervalToInvestigate][1] = intervals[i][1];
//             intervals[i][1] = -1;
//             intervals[i][0] = -1;
//           } else if (intervals[i][0] <= intervals[intervalToInvestigate][1]
//           &&
//                      intervals[i][1] >= intervals[intervalToInvestigate][0]
//                      && intervals[i][0] <=
//                      intervals[intervalToInvestigate][0] && intervals[i][1]
//                      >= intervals[intervalToInvestigate][1] &&
//                      intervals[i][0] != -1 && i != intervalToInvestigate) {
//             intervals[intervalToInvestigate][1] = intervals[i][1];
//             intervals[intervalToInvestigate][0] = intervals[i][0];
//             intervals[i][1] = -1;
//             intervals[i][0] = -1;
//           }
//         }

//         else if (intervalToInvestigate > i) {
//           if (intervals[intervalToInvestigate][0] <= intervals[i][0] &&
//               intervals[intervalToInvestigate][1] == intervals[i][1] &&
//               intervals[i][0] != -1 &&
//               intervals[intervalToInvestigate][1] != -1) {
//             intervals[i][0] = -1;
//             intervals[i][1] = -1;
//           } else if (intervals[intervalToInvestigate][0] <= intervals[i][0]
//           &&
//                      intervals[intervalToInvestigate][1] <= intervals[i][1]
//                      && intervals[intervalToInvestigate][1] >=
//                      intervals[i][0] && intervals[i][0] != -1 &&
//                      intervals[intervalToInvestigate][1] != -1) {
//             intervals[intervalToInvestigate][1] = intervals[i][1];
//             intervals[i][1] = -1;
//             intervals[i][0] = -1;
//           } else if (intervals[intervalToInvestigate][0] >= intervals[i][0]
//           &&
//                      intervals[intervalToInvestigate][1] <= intervals[i][1]
//                      && intervals[i][0] != -1 &&
//                      intervals[intervalToInvestigate][1] != -1) {
//             intervals[intervalToInvestigate][0] = intervals[i][0];
//             intervals[intervalToInvestigate][1] = intervals[i][1];
//             intervals[i][0] = -1;
//             intervals[i][1] = -1;
//           }
//         }
//       }
//       intervalToInvestigate++;
//     }

//     intervalToInvestigate = 0;

//     while (intervalToInvestigate != numIntervals) {
//       for (int i = 0; i < numIntervals; i++) {
//         if (intervalToInvestigate <= i) {
//           if (intervals[i][0] <= intervals[intervalToInvestigate][1] &&
//               intervals[i][1] >= intervals[intervalToInvestigate][0] &&
//               intervals[i][0] >= intervals[intervalToInvestigate][0] &&
//               intervals[i][1] >= intervals[intervalToInvestigate][1] &&
//               intervals[i][0] != -1 && i != intervalToInvestigate) {
//             intervals[intervalToInvestigate][1] = intervals[i][1];
//             intervals[i][1] = -1;
//             intervals[i][0] = -1;
//           } else if (intervals[i][0] <= intervals[intervalToInvestigate][1]
//           &&
//                      intervals[i][1] >= intervals[intervalToInvestigate][0]
//                      && intervals[i][0] <=
//                      intervals[intervalToInvestigate][0] && intervals[i][1]
//                      >= intervals[intervalToInvestigate][1] &&
//                      intervals[i][0] != -1 && i != intervalToInvestigate) {
//             intervals[intervalToInvestigate][1] = intervals[i][1];
//             intervals[intervalToInvestigate][0] = intervals[i][0];
//             intervals[i][1] = -1;
//             intervals[i][0] = -1;
//           }
//         }

//         else if (intervalToInvestigate > i) {
//           if (intervals[intervalToInvestigate][0] <= intervals[i][0] &&
//               intervals[intervalToInvestigate][1] == intervals[i][1] &&
//               intervals[i][0] != -1 &&
//               intervals[intervalToInvestigate][1] != -1) {
//             intervals[i][0] = -1;
//             intervals[i][1] = -1;
//           } else if (intervals[intervalToInvestigate][0] <= intervals[i][0]
//           &&
//                      intervals[intervalToInvestigate][1] <= intervals[i][1]
//                      && intervals[intervalToInvestigate][1] >=
//                      intervals[i][0] && intervals[i][0] != -1 &&
//                      intervals[intervalToInvestigate][1] != -1) {
//             intervals[intervalToInvestigate][1] = intervals[i][1];
//             intervals[i][1] = -1;
//             intervals[i][0] = -1;
//           } else if (intervals[intervalToInvestigate][0] >= intervals[i][0]
//           &&
//                      intervals[intervalToInvestigate][1] <= intervals[i][1]
//                      && intervals[i][0] != -1 &&
//                      intervals[intervalToInvestigate][1] != -1) {
//             intervals[intervalToInvestigate][0] = intervals[i][0];
//             intervals[intervalToInvestigate][1] = intervals[i][1];
//             intervals[i][0] = -1;
//             intervals[i][1] = -1;
//           }
//         }
//       }
//       intervalToInvestigate++;
//     }

//     vector<vector<int>> toReturn;
//     for (int i = 0; i < numIntervals; i++) {
//       if (intervals[i][0] != -1) {
//         vector<int> num;
//         num.push_back(intervals[i][0]);
//         num.push_back(intervals[i][1]);
//         toReturn.push_back(num);
//       }
//     }
//     return toReturn;
//   }
// };

// int main() {
//   vector<vector<int>> intervals;

//   //   vector<int> num1;
//   //   num1.push_back(2);
//   //   num1.push_back(4);

//   //   vector<int> num2;
//   //   num2.push_back(4);
//   //   num2.push_back(7);

//   vector<int> num1;
//   num1.push_back(2);
//   num1.push_back(3);

//   vector<int> num2;
//   num2.push_back(4);
//   num2.push_back(6);

//   vector<int> num3;
//   num3.push_back(5);
//   num3.push_back(7);

//   vector<int> num4;
//   num4.push_back(3);
//   num4.push_back(4);

//   intervals.push_back(num1);
//   intervals.push_back(num2);
//   intervals.push_back(num3);
//   intervals.push_back(num4);

//   Solution s1;
//   s1.merge(intervals);

//   return 0;
// }