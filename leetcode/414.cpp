/*************************************************************************
	> File Name: 414.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 日 11/ 8 16:33:04 2020
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

//利用set中元素的有序性和唯一性，将元素放入set中，若set的size不小于3输出倒数第三个元素；若set的size小于3输出最后一个元素。


class Solution {
public:
    int thirdMax(vector<int>& nums)
    {
        set<int> s(nums.begin(), nums.end());
        auto it = s.end();
        it--;
        if(s.size() >= 3){
            it--;
            it--;
        }
        return *it;
    }
};

