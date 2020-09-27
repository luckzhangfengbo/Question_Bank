/*************************************************************************
	> File Name: Leetcode-83.cpp
	> Author: zhangfengbo
	> Mail:1819067326@qq.com 
	> Created Time: 2020年02月25日 星期二 22时02分26秒
 ************************************************************************/




/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    /*
    struct ListNode *p = head , *q;
    while (p && p->next) {
        if (p->val - p->next->val) {
            p = p->next;
        }else {
            q = p->next ;
            p->next = q->next;
            free(q);
        }
    }
    return head;*/
    struct ListNode *p = head, *q;
    while (p && p->next) {
        if (p->val - p->next->val) {
            p = p->next;
        }else {
            q = p->next;
            p->next = p->next->next;
            free(q);
        }
    }
    return head;
}
