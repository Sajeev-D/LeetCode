// #include <stdio.h>
// #include <string.h>

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
//  public:
//   bool isPalindrome(string s) {
//     int stringSize = s.size();
//     string toCheck = "";
//     toCheck.resize(stringSize);
//     int toCheckIndex = 0;
//     for (int i = 0; i < stringSize; i++) {
//       if (((int)s[i] >= 65 && (int)s[i] <= 90) ||
//           ((int)s[i] >= 97 && (int)s[i] <= 122) ||
//           ((int)s[i] >= 48 && (int)s[i] <= 57)) {
//         int ascii = (int)s[i];
//         if (ascii >= 65 && ascii <= 90) {
//           toCheck[toCheckIndex] =
//               (char)(ascii + 32);  // Add 32 to convert to lowercase
//         } else {
//           toCheck[toCheckIndex] = s[i];
//         }
//         toCheckIndex++;
//       }
//     }
//     stringSize = toCheckIndex;
//     for (int i = 0; i < (stringSize / 2); i++) {
//       if (toCheck[i] != toCheck[stringSize - 1 - i]) {
//         return false;
//       }
//     }
//     return true;
//   }
// };

// int main() {
//   Solution s1;
//   string sentence = "A man, a plan, a canal: Panama";
//   s1.isPalindrome(sentence);
//   return 0;
// }