/*************************************************************************
	> File Name: Leetcode-234.cpp
	> Author: zhangfengbo
	> Mail:1819067326@qq.com 
	> Created Time: 2020年02月27日 星期四 16时03分19秒
 ************************************************************************/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int get (struct ListNode *head) {
    int n = 0 ;
    while (head)  n += 1, head = head->next ;
    return n;
}
struct ListNode* reverse(struct ListNode *head, int n) {
        struct ListNode ret , *p  = head, *q;
        while (n--) p = p->next;
        ret.next = NULL;
        while (p) {
            q = p->next;
            p->next = ret.next;
            ret.next = p ;
            p = q;
        }
        return ret.next;
}

bool isPalindrome(struct ListNode* head){
        int len = get(head);// 获取整个链表的长度
        struct ListNode *p = head , *q = reverse(head, (len + 1) / 2);//将链表的后半段就行翻转
        while (q) {
            if (p->val - q->val) return false ;
            p = p->next , q = q->next;
        }
        return true;
}
