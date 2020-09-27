/*************************************************************************
	> File Name: Leetcode-237.cpp
	> Author: zhangfengbo
	> Mail:1819067326@qq.com 
	> Created Time: 2020年02月27日 星期四 10时46分31秒
 ************************************************************************/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    struct ListNode *p ;
    node->val = node->next->val;
    p = node->next;
    node->next = p->next;
    free(p);
    return ;
}
