/*************************************************************************
	> File Name: 538.图的遍历.cpp
	> Author: 
	> Mail: 
	> Created Time: 四  9/17 10:32:07 2020
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
#define max_n 120
//
int num[max_n + 5][max_n + 5], check[max_n + 5], flag;  
int n;

void func(int x) {
    if (flag == 1) {
        cout << "-";
    }
    flag = 1;
    cout << x;
    for (int i = 1; i <= n; i++) {
        if (num[x][i] == 1 && check[i] == 0) {
            check[i] = 1;
            func(i);
        }
    }
    return ;
}



int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> num[i][j];
        }
    }

    for (int i = 1; i <= n; i++ ) {
        if (check[i] == 0) {
            check[i] =1;
            func(i); 
        }
    }



    return 0;
}
