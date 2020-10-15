/*************************************************************************
 > File Name: 484柱状统计图.cpp
 > Author: 
 > Mail: 
 > Created Time: 三 10/14 21:55:30 2020
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
    string a;
    int b[128] = {0};
    while (cin >> a) {
        for (int i = 0; i < a.size(); i++) {
            b[a[i]]++;
        }
    }
    int mmax = 0;
    for (int i = 'A'; i <= 'Z'; i++) {
        mmax = max(mmax, b[i]);
    }
    for (int i = 0; i < mmax; i++) {
        int last = -1;
        //表示第i行的最后一个位置是几
        for (int j = 'A'; j <= 'Z'; j++) {
            if (b[j] >= mmax - i) last = j;
        }
        for (int j = 'A'; j <= last; j++) {
            if (b[j] >= mmax - i) {
                cout << "*";
            } else {
                cout << " ";
            }
            if (j != last) cout << " ";
        }
        cout << endl;
    }
    for (int i = 'A'; i <= 'Z'; i++) {
        if (i != 'A') cout << " ";
        cout << (char)i;
    }
    return 0;
}



