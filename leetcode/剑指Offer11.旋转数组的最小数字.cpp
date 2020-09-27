/*************************************************************************
	> File Name: 剑指Offer11.旋转数组的最小数字.cpp
	> Author: 
	> Mail: 
	> Created Time: 四  9/17 07:52:18 2020
 **mZ*********************************************************************/

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
    int minArray(vector<int>& numbers) {
        //暴力大法
        int i = INT_MAX;
        for (auto c : numbers) {
            i = std::min(i, c);
        }
        return i;
    }
};

//二分加去重
class Solution {
public:
    int minArray(vector<int>& numbers) {
        while (numbers.size() > 1 && numbers.back() == numbers[0])
            numbers.pop_back();
        int n = numbers.size();
        int l = 0, r = n - 1;
        int t = numbers[r];
        while (l < r) {
            
            int mid = l + r >> 1;
            if (numbers[mid] > t) l = mid + 1;
            else r = mid;
        }
        return numbers[l];
    }

};
