/*************************************************************************
	> File Name: 2080.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 三 11/18 17:59:12 2020
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
#define max_n 10000
int n ,m ,  l, k ;

int a[max_n + 5];

int main() {
    cin >> n >> m;
    while  (m--) {
        cin >> l >> k;
        for (int i = l; i <= k; i++) {
            a[i] = 1;
        }
    }
    int count = 0;
    for (int j = 0; j <= n; j++) {
        if (a[j] == 0) count++; 
    }
    cout << count << endl;
    return 0;
}
