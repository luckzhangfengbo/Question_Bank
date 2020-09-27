/*************************************************************************
	> File Name: 508两人过河.cpp
	> Author: 
	> Mail: 
	> Created Time: 四  9/17 17:40:49 2020
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
//贪心算法

//1   _最快+次快|_最快|_最慢+次慢|_次块
//2. _最慢+最快|_最快|_次慢+最快|最快


int n, num[1005], ans;


int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    sort(num, num + n);
    for (int i = n - 1; i >= 0; i -= 2) {
        if (i == 0) {
            ans += num[0];
            break;
        }
        if (i == 1) {
            ans += num[1];
            break;
        }
        if (i == 2) {
            ans += num[0] + num[1] + num[2];
            break;
        }
        ans += min(num[1] + num[0] + num[i] + num[1], num[i] + num[0] + num[i - 1] + num[0]);
    }

    cout << ans << endl;
    return 0;
}
