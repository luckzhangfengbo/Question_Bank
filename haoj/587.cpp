/*************************************************************************
	> File Name: 587.cpp
	> Author: 
	> Mail: 
	> Created Time: 日  9/20 11:33:05 2020
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


int main() {
    int a, b , c , d = 0;
    cin >> a >> a >> b >>c;
    if (a > b) d++;
    if (b > c) d++;
    if (c > a) d++;
    if (d == 2) cout << 0 << endl;
    else cout << 1 << endl;
    return 0;
}
