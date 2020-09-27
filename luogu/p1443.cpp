/*************************************************************************
	> File Name: p1443.cpp
	> Author: 
	> Mail: 
	> Created Time: 日  9/13 11:35:55 2020
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
/*************************************************************************
	> File Name: 398.cpp
	> Author:
	> Mail:
	> Created Time: 五  9/11 21:40:37 2020
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
using namespace std;


struct node {
    int x,  y, step;
};

int dir[8][2] = {
    1, 2,
    1, -2,
    2, 1,
    2, -1,
    -1, 2,
    -1, -2,
    -2, 1,
    -2, -1
};

int n, m, sx, sy, mmap[405][405];

int main() {
    cin >> n >> m >> sx >> sy;
    queue<node> que;
    que.push({sx, sy, 0});
    while (!que.empty()) {
        node temp = que.front();
        que.pop();
        for(int i = 0; i < 8; i++) {
            int x = temp.x + dir[i][0];
            int y = temp.y + dir[i][1];
            if (x <= 0 || y <= 0 || x > n || y > m) continue;
            if (mmap[x][y] == 0) {
                mmap[x][y] = temp.step + 1;
                que.push({x, y, temp.step + 1});
            }
        }
    }

    mmap[sx][sy] = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            i && cout << " ";
            if (i == sx && j == sy) {
                cout << 0;
            } else if (mmap[i][j] == 0) {
                cout << -1;
            } else {
                  cout << mmap[i][j];
            }
        }
        cout << endl;
    }
    return 0;
}
