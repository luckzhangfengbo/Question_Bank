/*************************************************************************
	> File Name: 588.cpp
	> Author: 
	> Mail: 
	> Created Time: 日  9/20 11:43:13 2020
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


int ans[31][10005] = {{}, {1}}, n;

int main() {

    cin >> n;
    for (int i = 2; i <= n; i++) {
        int ind = 0;
        for (int j = 0; ans[i - 1][j] != 0; j++) {
            int x = 1;
            while (ans[i - 1][j] == ans[i - 1][j + 1]) {
                x++;
                j++;
            }
            ans[i][ind++] = x;
            ans[i][ind++] = ans[i - 1][j];
        }
    }
    for (int i = 0; ans[n][i] != 0; i++) {
        cout << ans[n][i];
    }
    cout << endl;
    return 0;
}
