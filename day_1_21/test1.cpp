#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        int islandPerimeter(vector<vector<int>>& grid) {
            int rsp = 0;
            if(grid.size() == 0)
            {
                return 0;

            }
            for (int i = 0; i < grid.size(); i++) {
                for (int j = 0; j < grid[i].size(); j++) {
                    if (grid[i][j] == 1) {
                        rsp += 4;
                        if (i > 0 && grid[i - 1][j] == 1) {
                            rsp -= 2;

                        }
                        if (j > 0 && grid[i][j - 1] == 1) {
                            rsp -= 2;

                        }

                    }

                }

            }
            return rsp;
        }

};
