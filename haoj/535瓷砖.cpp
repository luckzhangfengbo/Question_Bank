/*************************************************************************
 > File Name: 535瓷砖.cpp
 > Author: 
 > Mail: 
 > Created Time: 六 10/10 16:35:52 2020
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

//广搜
/*int n, m ;
char mmap[400][300];
int dir[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};
struct  node {
    int  x, y;
};


queue <node> que;

int ans = 1;

int main() {
    cin >> m >>n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mmap[i][j];
            if (mmap[i][j] == '@') {
                que.push({i, j});
            }
        }
    } 
    while (!que.empty()) {
        node temp =  que.front();
        que.pop();
        for (int i = 0; i <  4; i++) {
            int x = temp.x + dir[i][0];
            int y = temp.y + dir[i][1];
            if (mmap[x][y] == '.') {
                mmap[x][y] = 0;
                ans++;
                que.push({x, y});
            }
        }
    }
    cout << ans <<  endl;

    return 0;
}*/

//深搜


int n, m, sx, sy , ans = 1;

char mmap[505][505];
int dir[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};

void dfs(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int tx = x + dir[i][0];
        int ty = y + dir[i][1];
        if (mmap[tx][ty] == '.') {
            mmap[tx][ty] = 0;
            ans++;
            dfs(tx, ty);
        }
    }
    return ;
}


int main() {
    cin >> m >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mmap[i][j];
            if (mmap[i][j] == '@') {
                sx = i;
                sy = j;
            }
        }
    }

    dfs(sx, sy);
    cout << ans << endl;
    return 0;
}


