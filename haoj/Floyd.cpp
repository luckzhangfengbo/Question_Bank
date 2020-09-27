/*************************************************************************
	> File Name: Floyd.cpp
	> Author: 
	> Mail: 
	> Created Time: 日  9/20 18:45:43 2020
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

int n, m, s, ans[1005][1005];


int main() {

    memset(ans, 0x3F, sizeof(ans));
    cin >> n >> m >> s;
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin  >>   a >> b >>  c;
        ans[a][b] = c;
    }

    for (int i = 1; i <= n; i++) {
        ans[i][i] = 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                ans[j][k] = min(ans[j][k], ans[i][k] +ans[j][i]);
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        if (i != 1) cout << " ";
        cout << ans[s][i];
    }


    return 0;
}
