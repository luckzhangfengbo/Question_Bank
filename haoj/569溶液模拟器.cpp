/*************************************************************************
 > File Name: 569溶液模拟器.cpp
 > Author: 
 > Mail: 
 > Created Time: 三 10/14 16:03:50 2020
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

struct node {
    double v, c, salt;
};

int main() {
    double v0, c0, salt0;
    stack<node> sta;
    cin >> v0 >> c0;
    salt0 = v0 * c0 / 100;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        char t;
        cin >> t;
        if (t == 'P') {
            double vt, ct, saltt;
            cin >> vt >> ct;
            saltt = vt * ct / 100;
            v0 += vt;
            salt0 += saltt;
            sta.push({vt, ct, saltt});
        }
        if (t == 'Z') {
            if (!sta.empty()) {
                v0 -= sta.top().v;
                salt0 -= sta.top().salt;
                sta.pop();
            }
        }
        printf("%d %.5f\n", (int)v0, salt0 / v0 * 100);
    }
    return 0;
}

