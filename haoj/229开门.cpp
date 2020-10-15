/*************************************************************************
 > File Name: 229开门.cpp
 > Author: 
 > Mail: 
 > Created Time: 三 10/14 21:22:40 2020
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



    
struct node {
    int num, step;
};

int num[4][4] = {
    1, 2, 4, 8,
    16, 32, 64, 128,
    256, 512, 1024, 2048,
    4096, 8192, 16384, 32768
};
int check[100000];

int main() {
    int start = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            char t;
            cin >> t;
            if (t == '+') {
                start += num[i][j];
            }
        }
    }
    queue<node> que;
    que.push({start, 0});
    check[start] = 1;
    while (!que.empty()) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                node temp = que.front();
                if (temp.num & num[i][j]) {
                    temp.num -= num[i][j];
                } else {
                    temp.num += num[i][j];
                }
                for (int k = 0; k < 4; k++) {
                    if (temp.num & num[i][k]) {
                        temp.num -= num[i][k];
                    } else {
                        temp.num += num[i][k];
                    }
                    if (temp.num & num[k][j]) {
                        temp.num -= num[k][j];
                    } else {
                        temp.num += num[k][j];
                    }
                }
                temp.step++;
                if (temp.num == 0) {
                    cout << temp.step << endl;
                    return 0;
                }
                if (check[temp.num] == 0) {
                    check[temp.num] = 1;
                    que.push(temp);
                }
            }
        }
        que.pop();
    }   
    return 0;
}
