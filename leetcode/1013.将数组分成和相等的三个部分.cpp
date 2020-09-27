/*************************************************************************
	> File Name: 1013.将数组分成和相等的三个部分.cpp
	> Author: 
	> Mail: 
	> Created Time: 四  9/17 07:30:26 2020
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
bool canThreePartsEqualSum(int* A, int ASize) {
    // 两趟扫描解决
    int sum = 0;
    for (int i = 0; i < ASize; ++i) {
        sum += A[i];
    }
    if (sum % 3) { return false; }
    int part = 0, cnt = 0;
    for (int i = 0; i < ASize; ++i) {
        part += A[i];
        if (part == sum / 3) {
            part = 0;
            cnt++;
        }
    }
    return cnt >= 3;
}
