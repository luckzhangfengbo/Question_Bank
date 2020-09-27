/*************************************************************************
	> File Name: Leetcode-111.cpp
	> Author: zhangfengbo
	> Mail:1819067326@qq.com 
	> Created Time: 2020年02月28日 星期五 15时26分21秒
 ************************************************************************/



/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int minDepth(struct TreeNode* root){
        if (root == NULL) return 0 ;
        int leftminDepth = minDepth(root->left) ;
        int rightminDepth = minDepth(root->right);
        if (leftminDepth == 0  && rightminDepth != 0) return rightminDepth + 1;
        if (leftminDepth != 0 && rightminDepth == 0) return leftminDepth + 1;
        else return 1 + (leftminDepth > rightminDepth ? rightminDepth : leftminDepth);
}


