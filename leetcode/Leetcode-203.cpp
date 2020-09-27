/*************************************************************************
	> File Name: Leetcode-203.cpp
	> Author: zhangfengbo
	> Mail:1819067326@qq.com 
	> Created Time: 2020年02月26日 星期三 17时39分49秒
 ************************************************************************/





/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode ret , *p = &ret , *q;
    ret.next = head;
    while (p && p->next) {
        if (p->next->val == val) {
            q = p->next;
            p->next = p->next->next ;
            free(q);
        } else {
            p = p->next;
        }
    }
    return ret.next;
}
