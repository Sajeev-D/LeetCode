#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
 public:
  int hIndex(vector<int>& citations) {
    sort(citations.begin(), citations.end());

    int maxHindex = 0;

    for (int i = 0; i < citations.size(); i++) {
      if (citations.size() - i >= citations[i]) {
        if (citations.size() - i > maxHindex) maxHindex = citations.size() - i;
      }
    }

    return maxHindex;
  }
};

int main() { return 0; }