/*************************************************************************
	> File Name: p1157.cpp
	> Author: 
	> Mail: 
	> Created Time: 日  9/13 16:32:55 2020
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
#include <iomanip>
using namespace std;

int p[1000];
int n, m ;
void dfs(int x) {
    if (p[0] == m) {
        for (int i = 1;i <= p[0];i++) {
            cout << setw(3) << p[i];
        }
        cout << endl;
        return ;
    }
    for (int j = x ;j <= n ;j++) {
        p[++p[0]] = j;
        dfs(j + 1);
        p[p[0]--] = 0;
    }
}


int main() {
    cin >> n >> m;
    dfs(1);
    return 0;
}
