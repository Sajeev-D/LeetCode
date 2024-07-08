// #include <algorithm>
// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
//  public:
//   int hIndex(vector<int>& citations) {
//     sort(citations.rbegin(), citations.rend());

//     int maxHindex = 0;

//     for (int i = 0; i < citations.size(); i++) {
//       if (citations[i] >= i + 1) {
//         maxHindex = i + 1;
//       } else
//         break;
//     }

//     return maxHindex;
//   }
// };

// int main() {
//   vector<int> citations = {3, 0, 6, 1, 5};
//   Solution s1;
//   s1.hIndex(citations);
//   return 0;
// }