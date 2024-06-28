// #include <stdio.h>

// #include <iostream>
// #include <string>
// #include <unordered_map>

// using namespace std;

// /*
// Concept: Expand the window every loop. If a repeat is found, then contract the window until the repeat is removed. Each loop keep track of the mac length of the substring.
//  */

// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int n = s.length();
//         int maxLength = 0;
//         unordered_set<char> charSet;
//         int left = 0; // left part of the window index
        
//         for (int right = 0; right < n; right++) { // Only O(n) complexity
//             // While s[right] is repeating, keep erasing from the left index
//             while (charSet.count(s[right])) { 
//                 charSet.erase(s[left]);
//                 left++;
//             }
//             // Expand the window every for loop.
//             charSet.insert(s[right]);
//             // Check if the maxLength has changed.
//             maxLength = max(maxLength, right - left + 1);
//         }
        
//         return maxLength;
//     }
// };

// int main() {
//   Solution s1;
//   string a = "pwwkew";
//   s1.lengthOfLongestSubstring(a);
//   return 0;
// }