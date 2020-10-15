/*************************************************************************
 > File Name: p5719cpp.cpp
 > Author: 
 > Mail: 
 > Created Time: 四 10/15 16:15:25 2020
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

int n, k;
int count1 = 0, count2 = 0;
double ans1 = 0.0, ans2 = 0.0;
int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        if (i % k == 0) {
            count1++;
            ans1 += i;
        } else {
            count2++;
            ans2 += i;
        }
    }
    printf("%.1lf %.1lf", ans1/ count1, ans2 / count2);
    return 0;
}
