/*************************************************************************
	> File Name: LeetCode-605.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 五  1/ 1 13:39:15 2021
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
 *
 *
 *首先为了避免首位和尾位的特殊情况，可在首位和尾位都填上一个0，这样就可以一视同仁了，只需寻找到有多少个 0 的左右两边都是0即可，该个数即为可插花朵的最大值
 *
 * */
class Solution {
public:
    bool canPlaceFlowers(vector<int> & flowerbed, int n) {
        int count = 0;
        flowerbed.insert(flowerbed.begin(), 0);
        flowerbed.insert(flowerbed.end(), 0);
        for (int i = 1; i < flowerbed.size() - 1; i++) {
            if (flowerbed[i] == 0 && flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0) {
                flowerbed[i] = 1;
                count++;
            }
        }
        return n <= count;
    }
};
