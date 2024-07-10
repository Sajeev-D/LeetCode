// #include <iostream>
// #include <vector>
// using namespace std;

// // O(n^2)
// //   vector<int> productExceptSelf(vector<int>& nums) {
// //     int size = nums.size();
// //     vector<int> answer = {};
// //     int currIndex = 0;
// //     for (int i = 0; i < size; i++) {
// //       int sum = 1;
// //       for (int j = 0; j < size; j++) {
// //         if (j != currIndex) {
// //           sum *= nums[j];
// //         }
// //       }
// //       answer.push_back(sum);
// //       currIndex++;
// //     }
// //     return answer;
// //   }

// class Solution {
//  public:
//   vector<int> productExceptSelf(vector<int>& nums) {
//     int size = nums.size();
//     vector<int> answer(size);
//     vector<int> prefix(size);
//     vector<int> postfix(size);
//     int sum = 1;

//     // Get prefix vector
//     for (int i = 0; i < size; i++) {
//       sum *= nums[i];
//       prefix[i] = sum;
//     }

//     sum = 1;

//     // Get postfix vector
//     for (int i = size - 1; i >= 0; i--) {
//       sum *= nums[i];
//       postfix[i] = sum;
//     }

//     // get answer vector
//     for (int i = 0; i < size; i++) {
//       if (i == 0) {
//         answer[i] = postfix[i + 1];
//       } else if (i == size - 1) {
//         answer[i] = prefix[i - 1];
//       } else {
//         answer[i] = prefix[i - 1] * postfix[i + 1];
//       }
//     }
//     return answer;
//   }
// };

// int main() { return 0; }