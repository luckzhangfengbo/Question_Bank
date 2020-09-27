/*************************************************************************
	> File Name: Leetcode-19.cpp
	> Author: zhangfengbo
	> Mail:1819067326@qq.com 
	> Created Time: 2020年02月25日 星期二 21时45分06秒
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode ret, *p, *q;//将ret做成虚拟头节点
    ret.next = head;
    p = q = &ret;
    while (n--) q = q->next;//q向后走n步
    q = q->next;
    while (q) {
        p = p->next;
        q= q->next;
    }
    q = p->next;
    p->next = q->next;
    free(q);
    return ret.next;
}
