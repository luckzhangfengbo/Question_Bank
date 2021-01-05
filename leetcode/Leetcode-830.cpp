/*************************************************************************
	> File Name: Leetcode-830.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 二  1/ 5 19:13:41 2021
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
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> ret;
        int n = s.size();
        int num = 1;
        for (int i = 0; i < n; i++) {
            if (i == n - 1 || s[i] != s[i + 1]) {
                if (num >= 3) {
                    ret.push_back({i - num + 1, i});
                }
                num = 1;
            } else {
                num++;
            }
        }
        return ret;
    }
};
