/*************************************************************************
 > File Name: 304骑士风度的牛.cpp
 > Author: 
 > Mail: 
 > Created Time: 六 10/10 16:14:20 2020
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


int n, m;

struct node {
    int x, y, step;
};

queue<node> que;
char mmap[200][200];
//马走的方向
int dir[8][2]  = {
    1, 2, 1,  -2,  2, 1, 2, -1,
    -1, 2, -1, -2,  -2,  1, -2, -1 
};


int main() {
    cin >> m >>   n;
    for (int i = 1; i <=  n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mmap[i][j];
            if (mmap[i][j] == 'K') {
                que.push({i , j, 0});
            }
        }
    }

    while (!que.empty()) {
        node temp = que.front();
        que.pop();
        for (int i = 0; i < 8; i++) {
            int x = temp.x + dir[i][0];
            int y = temp.y + dir[i][1];
            if (x < 1 || y < 1 || x > n || y > m) continue;
            if (mmap[x][y] == 'H') {
                cout << temp.step + 1 << endl;
                return 0;
            }
            if (mmap[x][y] == '.') {
                mmap[x][y] = 0;
                que.push({x, y, temp.step + 1});
            }
        }
    }

    return 0;
}
