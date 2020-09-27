/*************************************************************************
	> File Name: 剑指Offer17.打印从1到最大的n位数.cpp
	> Author: 
	> Mail: 
	> Created Time: 四  9/17 07:41:08 2020
 ************************************************************************/

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
    vector<int> printNumbers(int n) {
        vector<int> vec;
        if (n == 0) return vec;
        for (int i = 1, max= pow(10, n); i < max; i++) {
            vec.push_back(i);
        }
        return vec;
    }
};
