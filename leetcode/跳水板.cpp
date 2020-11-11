/*************************************************************************
	> File Name: 跳水板.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 二 11/10 00:38:29 2020
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

class Solution {
public:
    vector<int> divingBoard(int shorter, int longer, int k) {
        if (k == 0) return vector<int>();
        if (shorter == longer) return vector<int> (1, shorter * k);
        vector<int> ans(k + 1);
        int a0 = shorter * k, d = longer - shorter;
        for (int i = 0; i < k + 1; i++) {
            ans[i] = a0 + i * d;
        }
        return ans;
    }
};
