/*************************************************************************
	> File Name: Leetcode-226.cpp
	> Author: zhangfengbo
	> Mail:1819067326@qq.com 
	> Created Time: 2020年02月28日 星期五 15时35分41秒
 ************************************************************************/



/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* invertTree(struct TreeNode* root){
        if(root == NULL) return NULL;
        struct TreeNode *p = root->left ;
        root->left = invertTree(root->right);
        root->right = invertTree(p);
        return root;
}


