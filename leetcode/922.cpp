/*************************************************************************
	> File Name: 922.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 日 11/ 8 15:09:13 2020
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
    vector<int> sortArrayByParityII(vector<int>& A) {

        vector<int> a;
        vector<int> b;
        vector<int> res;
        for (int i = 0; i < A.size(); i++) {
            if (A[i] % 2 == 0) b.push_back(A[i]);
            else a.push_back(A[i]);
        }
        for (int i = 0; i < a.size(); i++) {
            res.push_back(b[i]);
            res.push_back(a[i]);
        }
        return res;
    }
};

