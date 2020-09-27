/*************************************************************************
	> File Name: 80.小明看电影.cpp
	> Author: 
	> Mail: 
	> Created Time: 四  9/17 16:55:56 2020
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
char mmap[505][505];

int dir[4][2] = {
    0, 1, 1, 0, 0, -1, -1, 0
};


struct node {
    int x, y, step;
};
queue<node> que; 

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mmap[i][j];
            if (mmap[i][j] == 's') {
                que.push({i, j, 0});
            }
        }
    }


    while (!que.empty()) {
        node temp = que.front();
        que.pop();
        for (int i = 0; i < 4; i++) {
            int  x = temp.x + dir[i][0];
            int y = temp.y + dir[i][1];
            if (mmap[x][y] == 'g') {
                cout << temp.step + 1 << endl;
                return 0;    
            }
            if (mmap[x][y] == '.') {
                mmap[x][y] = 0;
                que.push({x, y, temp.step + 1});
            }
        }
    }

    cout << "No" << endl;
    return 0;
}
