/*************************************************************************
	> File Name: Leetcode-160.cpp
	> Author: zhangfengbo
	> Mail:1819067326@qq.com 
	> Created Time: 2020年02月25日 星期二 22时15分33秒
 ************************************************************************/




/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
     struct ListNode *p = headA , *q = headB;
     while (p != q) {
         p = p ? p->next :headB; // 从a链表走 当 p == NULL再从b链表走
         q = q ? q->next :headA; //从b链表走，当 q == NULL 再从a链表走
     }
     return p;
}
    /*int cntA = 0 , cntB = 0;
    struct ListNode *p = headA , *q = headB;
    while (p) cntA++, p = p->next;
    while (q) cntB++, q = q->next;
    int m = cntA - cntB;
    p = headA,  q = headB;
    if (m > 0) {
        while (m--) p = p->next;
        while (p != q) {
            p = p->next;
            q = q->next;
        }

    }else {
        while (m++) q = q->next;
        while (p != q) {
            p = p->next;
            q = q->next;
        }
    }
    return p;
}*/
