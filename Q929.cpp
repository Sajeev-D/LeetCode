#include <stdlib.h>
#include <string.h>

#include <vector>

using namespace std;

/*********************Attmept 1********************/

class Solution {
 public:
  int numUniqueEmails(vector<string>& emails) {
    // Convert all emails to correct format
    int numEmails = emails.size();
    for (int i = 0; i < numEmails; i++) {
      int sizeString = emails[i].size();
      string curr = emails[i];
      for (int j = 0; j < sizeString; j++) {
        if (curr[j] == '.' || curr[j] == '+') {
          curr[j] = '\0';
        }
      }

      for (int j = 0; j < sizeString; j++) {
        if (curr[j] == '\0' && j < sizeString - 1) {
          bool shift = true;
          int k = j;
          if (k + 1 < sizeString) {
            while (shift) {
              if (k + 1 < sizeString) {
                curr[k] = curr[k + 1];
                if (k + 1 == sizeString) curr[k + 1] = '\0';
              } else
                shift = false;
            }
          }
        }
      }
      emails[i] = curr;
    }

    // Count unique addresses
    int unique = 0;
    for (int i = 0; i < numEmails; i++) {
      bool duplicate = false;
      string curr = emails[i];
      for (int j = 0; j < numEmails; j++) {
        if (j != i) {
          if (curr == emails[j]) duplicate = true;
        }
      }
      if (!duplicate) unique++;
    }
    return unique;
  }
};

// Function is too complex so it exceeds time limit

/*********************End of Attmept 1********************/
