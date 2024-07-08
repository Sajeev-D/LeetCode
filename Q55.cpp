// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
//  public:
//   bool canJump(vector<int>& nums) {
//     int size = nums.size();

//     if (size == 1) return true;

//     bool canReach = false;
//     int goalIndex = size - 1;

//     for (int i = size - 1; i >= 1; i--) {
//       if (nums[i - 1] >= (goalIndex - (i - 1))) {
//         canReach = true;
//         goalIndex = i - 1;
//       } else {
//         canReach = false;
//       }
//     }
//     return canReach;
//   }
// };

// int main() { return 0; }