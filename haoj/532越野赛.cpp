/*************************************************************************
 > File Name: 532越野赛.cpp
 > Author: 
 > Mail: 
 > Created Time: 三 10/14 22:43:45 2020
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
    int x, y;
};

int sx, sy, l, r, n, m, raw_num1, mmap[505][505], eend[505][505];
int dir[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};

int func(int mid) {
    int check[505][505] = {0};
    queue<node> que;
    que.push({sx, sy});
    int num1 = raw_num1 - 1;
    check[sx][sy] = 1;
    while (!que.empty()) {
        if (num1 == 0) break;
        node temp = que.front();
        que.pop();
        for (int i = 0; i < 4; i++) {
            int x = temp.x + dir[i][0];
            int y = temp.y + dir[i][1];
            if (x == 0 || y == 0 || x > n || y > m) continue;
            if (check[x][y] == 0 && abs(mmap[temp.x][temp.y] - mmap[x][y]) <= mid) {
                check[x][y] = 1;
                que.push({x, y});
                if (eend[x][y] == 1) num1--;
            }
        }
    }
    if (num1 == 0) return 1;
    return 0;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mmap[i][j];
            r = max(r, mmap[i][j]);
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> eend[i][j];
            if (eend[i][j] == 1) {
                raw_num1++;
                sx = i;
                sy = j;
            }
        }
    }
    while (l != r) {
        int mid = (l + r) / 2;
        if (func(mid)) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }
    cout << l << endl;
    return 0;
}
