#include <stdio.h>

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
 public:
  int lengthOfLongestSubstring(string s) {
    int maxCount = 0;
    unordered_map<char, int> charMap;

    /*
    - Unordered map stores key value pairs in no particular order.
    - in this case key is a char, value is a int. <key_type, value_type>
    */

    // Sliding window algorithm

    /*
    - j is the end of the window, i is the start of the window. Starts empty
    first.
    -Concept: Expand the window in a loop. If a repeat is found, then contract the window until the repeat is removed, keep track of the largest window length recorded so far.
    */

    for (int i = 0, j = 0; j < s.size(); j++) {
      // Check if s[j] is already in charMap, which stores the last seen
      // position of each character.
      if (charMap.find(s[j]) != charMap.end()) {
        /* If s[j] is in map, line moves to the start of the window forward to
         the postion after the previous occurence.*/
        i = max(charMap[s[j]], i);
      }

      // Update the max string length so far
      maxCount = max(maxCount, j - i + 1);

            charMap[s[j]] = j + 1;
    }
    return maxCount;
  }
};

int main() {
  Solution s1;
  string a = "pwwkew";
  s1.lengthOfLongestSubstring(a);
  return 0;
}