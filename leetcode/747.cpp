/*************************************************************************
	> File Name: 747.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 日 11/ 8 15:36:37 2020
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
    int dominantIndex(vector<int>& nums) {
        int res = 0;
        //找最大的下标，只需要比较最大的数字  之前的就不用去比较
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > nums[res]) {
                res = i;
            }
        }
        //根据题意的条件
        for (int  i = 0; i < nums.size(); i++) {
            if (i != res && nums[res] < nums[i] * 2) {
                return -1;
            }

        }
        return res;
    }
};
