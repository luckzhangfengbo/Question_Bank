/*************************************************************************
 > File Name: 562找数.cpp
 > Author: 
 > Mail: 
 > Created Time: 三 10/14 21:15:56 2020
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

int n, ans = 0;
int main() {
    cin >>  n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        ans ^=  t;
    }
    cout << ans << endl;
    return 0;
}
