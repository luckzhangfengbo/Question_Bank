/*************************************************************************
	> File Name: Leetcode-104.cpp
	> Author: zhangfengbo
	> Mail:1819067326@qq.com 
	> Created Time: 2020年02月28日 星期五 12时50分24秒
 ************************************************************************/



/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int maxDepth(struct TreeNode* root){
        if (root == NULL) return 0;
        else {
                int leftDeepth = maxDepth(root->left);
                int rightDeepth = maxDepth(root->right);
                return (leftDeepth > rightDeepth ? (leftDeepth + 1) : (rightDeepth + 1));
        }
}
