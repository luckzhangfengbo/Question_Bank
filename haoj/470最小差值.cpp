/*************************************************************************
 > File Name: 470最小差值.cpp
 > Author: 
 > Mail: 
 > Created Time: 三 10/14 21:08:06 2020
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


int n, num[500005];

int main() {
    char str[10];
    while (cin >> str) {
        for (int i = 4, j = 1; i >= 0; i--, j *= 36) {
            int temp;
            if (str[i] <= '9') {
                temp = str[i] - '0';
            } else {
                temp = str[i] - 'A' + 10;
            }
            num[n] += temp * j;
        }
        n++;
    }
    sort(num, num + n);
    int mmin = 999999999;
    for (int i = 0; i < n - 1; i++) {
        int temp = num[i + 1] - num[i];
        if (temp < mmin) mmin = temp;
    }
    cout << mmin << endl;
    return 0;
}
