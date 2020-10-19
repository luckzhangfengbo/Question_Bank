/*************************************************************************
 > File Name: 删除中间节点.cpp
 > Author: 
 > Mail: 
 > Created Time: 一 10/19 09:49:31 2020
 ************************************************************************/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        if (node->next != NULL) {
            node->val = node->next->val;
            node->next = node->next->next;
        }
    }
};
