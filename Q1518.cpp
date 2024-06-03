// #include <iostream>
// using namespace std;

// class Solution {
//  public:
//   int numWaterBottles(int numBottles, int numExchange) {
//     int numDrinks = numBottles;
//     int currBottles = numBottles / numExchange;
//     int remainder = numBottles % numExchange;

//     while (currBottles != 0) {
//       numDrinks += currBottles;
//       int oldCurr = currBottles;
//       currBottles = (currBottles + remainder) / numExchange;
//       remainder = (oldCurr + remainder) % numExchange;
//     }
//     return numDrinks;
//   }
// };

// int main() {
//   Solution s;
//   cout << s.numWaterBottles(22, 6) << endl;
//   return 0;
// }