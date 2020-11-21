/*************************************************************************
	> File Name: 724.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 三 11/18 20:52:05 2020
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

/*
 *先计算总和,再利用两边相等,但是中间元素不用,可以列出总和 减去 该元素 等于 两倍的左边的元素
 */
class Solution {
    public :
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        int leftsum = 0;
        for (int i = 0; i < nums.size(); i++) {
             sum += nums[i];
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == sum - 2 * leftsum) return i;
            else leftsum += nums[i];
        }
        return -1;
    }
};
