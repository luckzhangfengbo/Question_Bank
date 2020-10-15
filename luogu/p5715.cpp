/*************************************************************************
 > File Name: p5715.cpp
 > Author: 
 > Mail: 
 > Created Time: 四 10/15 14:39:49 2020
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
/*
int a[3];
int main() {
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    sort(a, a + 3);
    for (int i = 0; i < 3; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
*/

priority_queue<int, vector<int > ,greater<int> > q;

int main() {
    int n = 3;
    int s;
    for (int i = 1; i <= n; i++) {
        cin >> s;
        q.push(s);
    }
    for (int i = 1; i <= n; i++) {
        cout << q.top() << " ";
        q.pop();
    }

    return 0;
}
