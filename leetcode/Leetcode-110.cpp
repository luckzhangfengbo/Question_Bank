/*************************************************************************
	> File Name: Leetcode-110.cpp
	> Author: zhangfengbo
	> Mail:1819067326@qq.com 
	> Created Time: 2020年02月28日 星期五 14时57分25秒
 ************************************************************************/




bool isBalanced(struct TreeNode* root){
    if(!root)
        return true;
    if(!root->left && !root->right)
        return true;
    if(depth(root->left)-depth(root->right) > 1 || depth(root->left)-depth(root->right) <-1)
             return false;
    return isBalanced(root->left) && isBalanced(root->right);
}

int depth(struct TreeNode* root){
    if(!root)
        return 0;
    int n = depth(root->left);
    int m = depth(root->right);
    if(m>n)
        return m+1;
    return n+1;
}
