// #include <algorithm>
// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
//  public:
//   vector<int> mostVisited(int n, vector<int>& rounds) {
//     // n is the number of slices

//     // Set the counter
//     vector<int> counter;
//     counter.resize(n + 1);
//     for (int i = 1; i < n + 1; i++) {
//       counter[i] = 0;
//     }

//     int numRounds = rounds.size();
//     int roundIndex = 0;
//     bool started = false;

//     while (roundIndex < (numRounds - 1)) {
//       int j = rounds[roundIndex];      // start index
//       int s = rounds[roundIndex + 1];  // end index

//       if (s > j) {
//         if (!started)
//           started = true;
//         else if (started)
//           j++;
//         for (int k = j; k <= s; k++) {
//           counter[k]++;
//         }
//       }

//       else if (s < j) {
//         if (!started)
//           started = true;
//         else if (started) {
//           j++;
//           if (j == n + 1) j = 1;
//         }

//         bool over = false;
//         while (!over) {
//           if (j == s) {
//             counter[j]++;
//             over = true;
//             break;
//           }
//           counter[j]++;
//           j++;
//           if (j == n + 1) j = 1;
//         }
//       }
//       roundIndex++;
//     }

//     // Get the most freq number
//     int maxFreq = 0;
//     for (int i = 0; i < counter.size(); i++) {
//       if (counter[i] > maxFreq) maxFreq = counter[i];
//     }

//     vector<int> ret;
//     for (int i = 0; i < counter.size(); i++) {
//       if (counter[i] == maxFreq) {
//         ret.push_back(i);
//       }
//     }
//     sort(ret.begin(), ret.end());
//     return ret;
//   }
// };

// int main() {
//   int n = 4;
//   vector<int> rounds = {1, 3, 1, 2};
//   Solution s;
//   vector<int> freq = s.mostVisited(n, rounds);
//   return 0;
// }