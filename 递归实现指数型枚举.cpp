/*************************************************************************
	> File Name: 递归实现指数型枚举.cpp
	> Author: 
	> Mail: 
	> Created Time: 一  9/28 21:42:27 2020
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
int n, num[20], cnt;



void func(int s) {
    for (int  i = s; i <= n; i++) {
        num[cnt] = i;
        cnt++;
        for (int i = 0; i < cnt; i++) {
            if (i) cout << " ";
            cout << num[i];
        }
        cout << endl;
        func(i + 1);
        cnt--;
    }
    return ;
}

int main() {
    cin >> n;
    func(1);
    return 0;
}
