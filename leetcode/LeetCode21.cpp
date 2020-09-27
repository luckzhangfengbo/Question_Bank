/*************************************************************************
	> File Name: 21.cpp
	> Author: zhangfengbo
	> Mail:1819067326@qq.com 
	> Created Time: 2020年03月04日 星期三 19时29分49秒
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* l3 = nullptr;
        if(!l1 && !l2)
        return nullptr;
        if(!l1)
        return l2;
        if(!l2)
        return l1;
        if(l1->val <= l2->val){
            l3 = l1;
            l1 = l1->next;
        }
        else{
            l3 = l2;
            l2 = l2->next;
        }
        ListNode *l = l3;
        while(l1 && l2){
            if(l1->val <= l2->val){
            l3->next = l1;
            l3 = l3->next;
            l1 = l1->next;
            }
            else{
            l3->next = l2;
            l3 = l3->next;
            l2 = l2->next;
            }
        }
        while(l1){
            l3->next = l1;
            l3 = l3->next;
            l1=l1->next;
        }
        while(l2){
            l3->next = l2;
            l3 = l3->next;
            l2 = l2->next;
        }
        return l;
    }
};
