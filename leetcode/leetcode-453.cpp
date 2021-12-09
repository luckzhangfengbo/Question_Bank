/*************************************************************************
	> File Name: leetcode-453.cpp
	> Author: zhangfb
	> Mail: 1819067326@qq.com
	> Created Time: Thu 09 Dec 2021 12:45:15 PM CST
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <stack>
#include <queue>
#include <map>
#include <vector>
#include <string>
using namespace std;


class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minNum = *min_element(nums.begin(),nums.end());
        int res = 0;
        for (int num : nums) {
            res += num - minNum;
        }
        return res;
    }
};

//世界的本质就是数学
