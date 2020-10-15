/*************************************************************************
 > File Name: 502求和1.cpp
 > Author: 
 > Mail: 
 > Created Time: 三 10/14 22:54:25 2020
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


int n, num[1000003];

bool cmp(int a, int b) {
    return abs(a) < abs(b);
}

int main() {    
    cin >> n;
    for (int i = 0; i <  n; i++) {
        cin >>  num[i];
    }


    sort(num,  num + n, cmp);
    int ans = 9999999;
    for (int i = 1; i <= n; i++) {
        ans = min(ans, abs(num[i - 1] + num[i]));
    }
    cout << ans << endl;
    return 0;
}
