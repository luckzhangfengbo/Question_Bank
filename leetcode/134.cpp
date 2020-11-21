/*************************************************************************
	> File Name: 134.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 三 11/18 19:54:22 2020
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
 来看一下贪心主要贪在哪里：
如果gas的总和小于cost总和，那么无论从哪里出发，一定是跑不了一圈的
remain[i] = gas[i]-cost[i]为一天剩下的油，remain[i]，i从0开始计算累加到最后一站，如果累加没有出现负数，说明从0出发，油就没有断过，那么0就是起点。
如果累加的最小值是负数，就要从非0节点出发，从后向前，看哪个节点能这个负数填平。
 * */

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int curSum = 0;
        int min = INT_MAX; // 从起点出发，油箱里的油量
        for (int i = 0; i < gas.size(); i++) {
            int remain = gas[i] - cost[i];
            curSum += remain;
            if (curSum < min) {
                min = curSum;
            }
        }
        if (curSum < 0) return -1;  // 情况1
        if (min >= 0) return 0;     // 情况2
                                    // 情况3
        for (int i = gas.size() - 1; i >= 0; i--) {
            int remain = gas[i] - cost[i];
            min += remain; 
            if (min >= 0) {
                return i;
            }
        }
        return -1;
    }
};

