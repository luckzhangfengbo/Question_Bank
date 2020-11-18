/*************************************************************************
	> File Name: 4131.cpp
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 三 11/18 13:44:25 2020
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

//01背包

// 状态转移方程dp[i][j] 表示前i件物品背包重量为j时获得的最大价值
// 以第i件物品为分界，  选还是不选
//  dp[i][j] = max{dp[i - 1][j], dp[i - 1][j - w[i]] + d[i]};

/*int n, m , dp[10000][10000], w[10000], d[10000]; //n物品个数， m 背包总承重 ， dp答案数组 ,   w重量， d价值

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >>  w[i] >> d[i];
    }
    for  (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (j < w[i]) {
                dp[i][j] = dp[i - 1][j];
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + d[i]);
            }
        }
    }
    cout <<  dp[n][m] << endl;

    return 0;
}
*/
 //滚动数组优化
int n, m , dp[2][10000], w[10000], d[10000]; //n物品个数， m 背包总承重 ， dp答案数组 ,   w重量， d价值

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >>  w[i] >> d[i];
    }
    for  (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (j < w[i]) {
                dp[i % 2][j] = dp[(i - 1) % 2][j];
            } else {
                dp[i % 2][j] = max(dp[(i - 1) % 2][j], dp[(i - 1) % 2][j - w[i]] + d[i]);
            }
        }
    }
    cout <<  dp[n % 2][m] << endl;

    return 0;
}
//降维
/*int n, m , dp[10000], w[10000], d[10000]; //n物品个数， m 背包总承重 ， dp答案数组 ,   w重量， d价值

int main() {
   cin >> n >> m;
   for (int i = 1; i <= n; i++) {
       cin >> w[i] >> d[i];
   }
   for (int i = 1; i <= n; i++) {
       for (int j = m; j > 0 ; j--) {
            if (j < w[i]) {
                break;
            } else {
                dp[j] = max(dp[j] , d[i] + dp[j - w[i]]);
            }
       }
    }
    cout << dp[m] << endl;
    return 0;
}
*/
