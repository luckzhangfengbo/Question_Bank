/*************************************************************************
 > File Name: 397僵尸来袭.cpp
 > Author: 
 > Mail: 
 > Created Time: 二 10/13 10:00:57 2020
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

int n, m ,ans = 0;
char mmap[105][105];

int dir[4][2] = {0, 1, 1, 0 , 0, -1, -1, 0};


void dfs(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int tx = x + dir[i][0];
        int ty = y + dir[i][1];
        if (mmap[tx][ty] != 0) {
            mmap[tx][ty] = 0;
            dfs(tx, ty);
        }
    }
    return ;
}



int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mmap[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (mmap[i][j] != 0) {
                ans++;
                mmap[i][j] = 0;
                dfs(i, j);
            }
        }
    }
    cout << ans << endl;

    return 0;
}
