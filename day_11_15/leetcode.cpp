#include<iostream>

using namespace std; 

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
  public:
    int getHight(TreeNode* p)
    {
      if(p == NULL)
      {
        return 0;
      }    
      else
      {
        return getHight(p->left) > getHight(p->right) ? getHight(p->left) : getHight(p->right) + 1; 

      }

    }
    bool isBalanced(TreeNode* root) {
      if(root == NULL)
      {
        return true;

      }
      else{
        return !(abs(getHight(root->left) - getHight(root->right)) <= 1) && 
          isBalanced(root->left)&& isBalanced(root->right);
      }
    }
};

class Solution {
  public:
    bool isBalanced(TreeNode* root) {
    return !root ? true : abs(depth(root->left) - depth(root->right)) <= 1 && isBalanced(root->left) && isBalanced(root->right);    
    }
    int depth(TreeNode* cur) {
    return !cur ? 0 : max(depth(cur->left), depth(cur->right)) + 1;
    }
};

