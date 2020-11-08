/*************************************************************************
	> File Name: 1539.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 日 11/ 8 16:22:14 2020
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
    int findKthPositive(vector<int>& arr, int k) {

        vector<int> res;
        int max = arr[arr.size() - 1], index = 0;
        for (int i = 1;i < max; i++) {
            if (arr[index] != i) res.push_back(i);\
            else index++;
        }
        if (res.size() < k) {
            return max + (k - res.size());
        }
        return res[k - 1];
    }
};
