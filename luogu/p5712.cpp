/*************************************************************************
 > File Name: p5712.cpp
 > Author: 
 > Mail: 
 > Created Time: 四 10/15 16:01:12 2020
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

    int n;
    cin >> n;
    if (n == 0) {
        cout << "Today, I ate " << 0 << " apple.";
    }
    if (n == 1) {
        cout << "Today, I ate " << 1 << " apple.";
    } else if (n > 1){
        cout << "Today, I ate " << n << " apples.";
    }
    return 0;
}
