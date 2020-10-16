/*************************************************************************
 > File Name: p5743.cpp
 > Author: 
 > Mail: 
 > Created Time: 四 10/15 16:45:18 2020
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



int func(int n) {
    return 2 * func(n + 1) + 2;
}


int main() {
    int n;
    cout << func(n) << endl;
    return 0;
}
