#include<iostream>
#include<stack>
#include<vector>


using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
  public:
    vector<TreeNode*> vec;
    TreeNode* increasingBST(TreeNode* root) {
      stack<TreeNode*> dp;
      TreeNode*p = root;
      while(p != NULL || dp.size())
      {
        while(p != NULL)
        {
          dp.push(p);
          p = p->left;

        }
        p = dp.top();
        dp.pop();
        vec.push_back(p);
        p = p->right;

      }
      int i;
      for(i = 0; i < vec.size()-1;++i)
      {
        vec[i]->left = NULL;
        vec[i]->right = vec[i+1];

      }
      vec[i]->left = NULL;
      vec[i]->right = NULL;

    }

};


int main()
{


}
