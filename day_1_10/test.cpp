#include <iostream>
#include <vector>

using namespace std;

/*
   class Solution {
   public:
   bool searchMatrix(vector<vector<int>>& matrix, int target) {
   for(int i = 0; i < matrix.size() ; i++)
   {
   for(int j = 0; j < matrix[i].size() ; ++j)
   if(target == matrix[i][j])
   {
   return true;

   }

   }
   return false;

   }
   };
   */

class Solution 
{ 
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        for(size_t i = 0; i < matrix.size() ; ++i)
        {
            for(size_t j = 0;j < matrix[i].size(); ++j)
            {
                if(matrix[i][0] <= target && matrix[i][matrix[i].size() - 1] >= target)
                {
                    if(target == matrix[i][j])
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
