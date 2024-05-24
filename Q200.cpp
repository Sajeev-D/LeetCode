#include <stdlib.h>

#include <iostream>
#include <vector>
using namespace std;

class Solution {
 public:
  int numIslands(vector<vector<char>>& grid) {
    int numIslands = 0;
    int numRows = grid.size();
    int numCols = grid[0].size();
    vector<vector<bool>> visited(numRows, vector<bool>(numCols, false));
    bool all1svisited = false;
    int i = 0;
    int j = 0;
    while (!all1svisited) {
      char curr = grid[i][j];
      // continue here!!
    }
  }
};