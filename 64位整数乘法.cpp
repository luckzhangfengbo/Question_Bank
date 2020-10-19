/*************************************************************************
	> File Name: 64位整数乘法.cpp
	> Author: 
	> Mail: 
	> Created Time: 一  9/28 21:23:21 2020
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
//快速乘

long long quick_mul(long long a, long long b, long long p) {
    long long tmp = a, ans = 0;
    while (b) {
        if (b & 1) ans = (ans + tmp) % p;
        tmp = tmp * 2 % p;
        b >>= 1;
    }
    return ans; 
}

int main() {
    long long a, b, p;
    cin >> a >> b >> p;
    cout << quick_mul(a, b, p) << endl;
    return 0;
}
