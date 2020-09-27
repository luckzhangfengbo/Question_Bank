/*************************************************************************
	> File Name: leetCode_剑指Offer06.从尾到头打印链表.cpp
	> Author: 
	> Mail: 
	> Created Time: 四  9/17 07:25:59 2020
 ************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>
#include <map>
#include <stack>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cstdio>
using namespace std;

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
    vector<int> reversePrint(ListNode* head) {
        vector<int> vec;
        stack<int> s;
        while (head) {
            s.push(head->val);
            head = head->next;
        }
        while (!s.empty()) {
            vec.push_back(s.top());
            s.pop();
        }
        return vec;
    }
};
