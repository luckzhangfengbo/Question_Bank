/*************************************************************************
 > File Name: 482编辑.cpp
 > Author: 
 > Mail: 
 > Created Time: 三 10/14 21:01:29 2020
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

char str[100005];
stack<char> fro, back;
int n;

int main() {
    cin >> str >> n;
    for (int i = 0; str[i]; i++) {
        fro.push(str[i]);
    }
    for (int i = 0; i < n; i++) {
        char t;
        cin >> t;
        if (t == 'L') {
            if (fro.empty()) continue;
            back.push(fro.top());
            fro.pop();
        } else if (t == 'D') {
            if (back.empty()) continue;
            fro.push(back.top());
            back.pop();
        } else if (t == 'B') {
            if (fro.empty()) continue;
            fro.pop();
        } else {
            cin >> t;
            fro.push(t);
        }
    }
    while (!fro.empty()) {
        back.push(fro.top());
        fro.pop();
    }
    while (!back.empty()) {
        cout << back.top();
        back.pop();
    }
    return 0;
}
