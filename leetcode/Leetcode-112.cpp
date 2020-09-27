/*************************************************************************
	> File Name: Leetcode-112.cpp
	> Author: zhangfengbo
	> Mail:1819067326@qq.com 
	> Created Time: 2020年02月28日 星期五 15时06分12秒
 ************************************************************************/


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

//递归实现
bool hasPathSum(struct TreeNode* root, int sum){
    if (root == NULL)  return false;
    if (root->left == NULL && root->right == NULL)  return sum - root->val == 0;
    return (hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val));
}

