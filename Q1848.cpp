#include <stdio.h>

#include <iostream>
#include <vector>
using namespace std;

class Solution {
 public:
  int getMinDistance(vector<int>& nums, int target, int start) {
    int sizeNums = nums.size();
    int diff = 10000;
    int targetIndex = 10000;
    for (int i = 0; i < sizeNums; i++) {
      if (nums[i] == target) {
        if (abs(i - start) < diff) {
          diff = abs(i - start);
          targetIndex = i;
        }
      }
    }

    return abs(targetIndex - start);
  }
};

int main() { return 0; }