/*************************************************************************
 > File Name: 判断能否从起点走到终点.cpp
 > Author: 
 > Mail: 
 > Created Time: 二 10/13 09:45:57 2020
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

int n, m , sx, sy;

char mmap[505][505];


int dir[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};


int func(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int tx = x + dir[i][0];
        int ty = y + dir[i][1];
        if (mmap[tx][ty] == 'g') {
            return 1;
        }
        if (mmap[tx][ty] == '.')  {
            mmap[tx][ty] = '#';
            if (func(tx, ty) == 1) {
                return  1;
            }
        }
    }
    return 0;
}


int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mmap[i][j];
            if (mmap[i][j] == 's') {
                sx = i;
                sy = j;
            }
        }
    }

    if (func(sx, sy) == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
