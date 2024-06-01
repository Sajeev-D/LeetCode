// #include <stdlib.h>

// #include <iostream>
// #include <vector>
// using namespace std;

// void dfs(vector<vector<char>>& grid, int i, int j, int numRows, int numCols)
// {
//   if (i < 0 || j < 0 || i >= numRows || j >= numCols || grid[i][j] == '0') {
//     return;
//   }
//   grid[i][j] = '0';
//   dfs(grid, i + 1, j, numRows, numCols);
//   dfs(grid, i - 1, j, numRows, numCols);
//   dfs(grid, i, j + 1, numRows, numCols);
//   dfs(grid, i, j - 1, numRows, numCols);
// }

// class Solution {
//  public:
//   int numIslands(vector<vector<char>>& grid) {
//     if (grid.size() == 0) return 0;
//     int numIslands = 0;
//     int numRows = (grid.size());
//     int numCols = static_cast<int>(grid[0].size());

//     for (int i = 0; i < numRows; i++) {
//       for (int j = 0; j < numCols; j++) {
//         if (grid[i][j] == '1') {
//           numIslands++;
//           dfs(grid, i, j, numRows, numCols);
//         }
//       }
//     }
//     return numIslands;
//   }
// };

// int main() {
//   std::vector<std::vector<char>> grid = {
//       {'1', '1', '1', '1', '0'},  // Change string literals to characters
//       {'1', '1', '0', '1', '0'},
//       {'1', '1', '0', '0', '0'},
//       {'0', '0', '0', '0', '0'}};
//   Solution s;
//   cout << s.numIslands(grid) << endl;

//   return 0;
// }
