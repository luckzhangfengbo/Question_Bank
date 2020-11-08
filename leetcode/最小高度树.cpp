/*************************************************************************
	> File Name: 最小高度树.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 日 11/ 8 16:37:33 2020
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	TreeNode* buildTree(vector<int>& nums, int l, int r) {
		if (l > r) return nullptr;
		int mid = l + r >> 1;
        //递归左右节点
		TreeNode* root = new TreeNode(nums[mid]);
		root->left = buildTree(nums, l, mid - 1);
		root->right = buildTree(nums,mid + 1, r);
		return root;
	}
	TreeNode* sortedArrayToBST(vector<int>& nums) {
		return buildTree(nums, 0, nums.size() - 1);
	}
};

