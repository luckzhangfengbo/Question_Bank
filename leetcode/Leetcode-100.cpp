/*************************************************************************
	> File Name: Leetcode-100.cpp
	> Author: zhangfengbo
	> Mail:1819067326@qq.com 
	> Created Time: 2020年02月28日 星期五 12时23分01秒
 ************************************************************************/


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool isSameTree(struct TreeNode* p, struct TreeNode* q){
        if (p == NULL  && q == NULL) return true ;
        if (p == NULL  || q == NULL) return false;
        if (p->val != q->val) return false ;
        return isSameTree(p->left, q->left) && isSameTree(p->right , q->right);
}
