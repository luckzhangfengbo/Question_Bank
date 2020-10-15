/*************************************************************************
 > File Name: p5711.cpp
 > Author: 
 > Mail: 
 > Created Time: 四 10/15 14:31:36 2020
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
    if (n % 400 == 0 || (n % 100 != 0 && n % 4 == 0)) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
