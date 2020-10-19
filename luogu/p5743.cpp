/*************************************************************************
 > File Name: p5743.cpp
 > Author: 
 > Mail: 
 > Created Time: 四 10/15 16:38:45 2020
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


int func(int n) {
    return ans = 2 * func(n + 1) + 2;
}


int main() {
    int n;
    func(n);
    cout << ans << endl;
    return 0;
}
