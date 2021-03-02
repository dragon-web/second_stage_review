#include <iostream>
#include <vector>

using namespace std;
class Solution {
    public:
        vector<vector<int>> generate(int numRows) {
            vector<vector<int> > pacal;
            for(int i=1; i<=numRows; ++i) 
                pacal.push_back(vector<int> (i, 1));
            for(int i=2; i<numRows; ++i)
            {
                for(int j=1; j<i; ++j)
                {
                    pacal[i][j] = pacal[i-1][j-1] + pacal[i-1][j];

                }
            }
            return pacal;
        }
};
