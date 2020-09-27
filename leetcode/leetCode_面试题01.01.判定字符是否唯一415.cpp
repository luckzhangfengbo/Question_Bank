/*************************************************************************
	> File Name: leetCode_面试题01.01.判定字符是否唯一415.cpp
	> Author: 
	> Mail: 
	> Created Time: 四  9/17 06:59:23 2020
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


class Solution {
public:
//暴力
    bool isUnique(string astr) {
        sort(astr.begin(), astr.end());
        for (int i  = 1; i < astr.size(); i++) {
            if (astr[i] == astr[i - 1]) {
                return false;
            }
        }
        return true;
    }
};
