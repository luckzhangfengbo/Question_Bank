/*************************************************************************
	> File Name: leetCode_剑指Offer10-I.斐波那契数列.cpp
	> Author: 
	> Mail: 
	> Created Time: 四  9/17 07:10:42 2020
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
	int fib(int n) {
		//需要判断n为0的情况 否则下方memo[1]的定义会越界
        if(n == 0)return 0;
		vector<int> memo(n + 1);
		memo[0] = 0;
		memo[1] = 1;

		for (int i = 2; i <= n; i++)
		{
			memo[i] = (memo[i - 1] + memo[i - 2])% 1000000007;
		}
		return memo[n];
	}
};

