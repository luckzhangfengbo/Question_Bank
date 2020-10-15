/*************************************************************************
 > File Name: p5660.cpp
 > Author: 
 > Mail: 
 > Created Time: 四 10/15 14:26:53 2020
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

int ans = 0;
char s[21];



int main() {
    cin >> s;
    for (int i = 0; i < 8; i++) {
        if (s[i] == '1') {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
