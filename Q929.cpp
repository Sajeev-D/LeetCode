// #include <stdlib.h>

// #include <iostream>
// #include <string>  // Add this line
// #include <unordered_set>
// #include <vector>

// using namespace std;

// /*********************Attmept 1********************/

// // class Solution {
// //  public:
// //   int numUniqueEmails(vector<string>& emails) {
// //     // Convert all emails to correct format
// //     int numEmails = emails.size();
// //     for (int i = 0; i < numEmails; i++) {
// //       int sizeString = emails[i].size();
// //       string curr = emails[i];
// //       for (int j = 0; j < sizeString; j++) {
// //         if (curr[j] == '.' || curr[j] == '+') {
// //           curr[j] = '\0';
// //         }
// //       }

// //       for (int j = 0; j < sizeString; j++) {
// //         if (curr[j] == '\0' && j < sizeString - 1) {
// //           bool shift = true;
// //           int k = j;
// //           if (k + 1 < sizeString) {
// //             while (shift) {
// //               if (k + 1 < sizeString) {
// //                 curr[k] = curr[k + 1];
// //                 if (k + 1 == sizeString) curr[k + 1] = '\0';
// //               } else
// //                 shift = false;
// //             }
// //           }
// //         }
// //       }
// //       emails[i] = curr;
// //     }

// //     // Count unique addresses
// //     int unique = 0;
// //     for (int i = 0; i < numEmails; i++) {
// //       bool duplicate = false;
// //       string curr = emails[i];
// //       for (int j = 0; j < numEmails; j++) {
// //         if (j != i) {
// //           if (curr == emails[j]) duplicate = true;
// //         }
// //       }
// //       if (!duplicate) unique++;
// //     }
// //     return unique;
// //   }
// // };

// // Function is too complex so it exceeds time limit

// /*********************End of Attmept 1********************/

// /*********************Attmept 2********************/
// class Solution {
//  public:
//   int numUniqueEmails(vector<string>& emails) {
//     int vecSize = emails.size();
//     unordered_set<string> uniqueEmails;

//     for (int i = 0; i < vecSize; i++) {
//       string curr = emails[i];
//       int strSize = curr.size();
//       string newEmail = "";
//       int j = 0;
//       char iterator = curr[0];

//       // Get the name
//       while (iterator != '@' && iterator != '+') {
//         if (iterator == '.') {
//           j++;
//           iterator = curr[j];
//         } else {
//           newEmail += iterator;  // Concatenate the strings
//           j++;
//           iterator = curr[j];
//         }
//       }

//       // Get the domain
//       iterator = curr[j];
//       bool postAt = false;

//       while (iterator != '\0') {
//         if (iterator == '@') postAt = true;

//         if (!postAt) {
//           j++;
//           iterator = curr[j];
//         } else {
//           newEmail += curr[j];
//           j++;
//           iterator = curr[j];
//         }
//       }

//       // newEmail is fully formatted
//       auto search = uniqueEmails.find(newEmail);
//       if (search == uniqueEmails.end()) {
//         uniqueEmails.insert(newEmail);
//       }
//     }

//     return uniqueEmails.size();
//   }
// };

// /*********************End of attempt 2*************/

// int main() {
//   vector<string> emails = {"test.email+alex@leetcode.com",
//                            "test.e.mail+bob.cathy@leetcode.com",
//                            "testemail+david@lee.tcode.com"};
//   Solution sol;
//   int num = sol.numUniqueEmails(emails);
//   cout << num << endl;
//   return 0;
// }