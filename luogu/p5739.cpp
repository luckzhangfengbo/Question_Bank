/*************************************************************************
	> File Name: p5739.cpp
	> Author: 
	> Mail: 
	> Created Time: 一  9/28 09:09:24 2020
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

int sum = 1;
int fib(int n) {
    if (n == 1) return 1;
    for (int i = 2; i <= n; i++) {
        sum  = sum  * i;
    }
    return sum;
}


int main() {
    int n;
    cin >> n;
    cout << fib(n) <<endl;
    return 0;
}
