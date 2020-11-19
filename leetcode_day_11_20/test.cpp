#define _CRT_SECURE_NO_WARNINGS 

#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>

using namespace std;
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 
class Solution {
public:
	vector<TreeNode*> tre1;
	vector<TreeNode*> tre2;
	void dfs(TreeNode* root, TreeNode** pre, int num, vector<TreeNode*> &Tree1)
	{
		if (root == NULL)
		{
			return;
		}
		Tree1.push_back(root);
		if (root->val == num)
		{
			*pre = root;
			return;
		}
		dfs(root->left, &root, num, Tree1);
		dfs(root->right, &root, num, Tree1);
	}
	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
		if (root == NULL)
		{
			return NULL;
		}
		if (p == root || q == root)
		{
			return NULL;
		}
		TreeNode* res1 = NULL;
		TreeNode* res2 = NULL;
		dfs(root, &res1, p->val, tre1);
		dfs(root, &res1, p->val, tre2);
		int i = tre1.size() < tre2.size() ? tre1.size() : tre1.size();
		for (--i; i > 0; --i)
		{
			if (tre1[i] == tre2[i])
			{
				return tre1[i];
			}
		}
		return NULL;
	}
};

class Solution {
public:
	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
		if (!root)  
			return nullptr;
		if (p->val < root->val && q->val > root->val)  
			return root;  
		if (p->val > root->val && q->val < root->val)  
			return root;
		if (root == p || root == q)
			return root;
		if (p->val < root->val && q->val < root->val)  //都位于root左侧，那我们就搜索root的左子树
			return lowestCommonAncestor(root->left, p, q);
		return lowestCommonAncestor(root->right, p, q);  //都位于root右侧，那我们就搜索root的右子树
	}
};
int main()
{
	TreeNode n1(6);
	TreeNode n2(2);
	TreeNode n3(8);
	TreeNode n4(0);
	TreeNode n5(4);
	TreeNode n6(7);
	TreeNode n7(9);
	TreeNode n8(3);
	TreeNode n9(5);
	n1.left = &n2;
	n1.right = &n3;
	n2.left = &n4;
	n2.right = &n5;
	n4.left = NULL;
	n4.right = NULL;
	n5.left = NULL;
	n5.right = NULL;
	n6.left = &n8;
	n6.right = &n9;
	n7.right = NULL;
	n7.left = NULL;
	n8.left = NULL;
	n8.right = NULL;
	n9.left = NULL;
	n9.right = NULL;
	Solution a;
	a.lowestCommonAncestor(&n1, &n2, NULL);
	system("pause");
	return 0;
}