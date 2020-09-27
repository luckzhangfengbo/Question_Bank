/*************************************************************************
	> File Name: BigInt_mov.cpp
	> Author: 
	> Mail: 
	> Created Time: 日  9/13 15:50:46 2020
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
using namespace std;
char num1[105], num2[105];
int num3[105], num4[105], ans[305];
//用数组的0位去存长度可以节省i部分的空间
int main() {
    cin >> num1 >> num2;
    for (int i = strlen(num1) - 1, j = 1; i >= 0; i--, j++) {
        num3[j] = num1[i] - '0';
    }
    for (int i = strlen(num2) - 1, j = 1; i >= 0; i--, j++) {
        num4[j] = num2[i] - '0';
    }
    num3[0] = strlen(num1);
    num4[0] = strlen(num2);
    for (int i = 1; i <= num3[0]; i++) {
        for (int j = 1; j <= num4[0]; j++) {
            ans[i + j - 1] += num3[i] * num4[j];
        }
    }
  //核心思想
    for (int i = 1; i <= num3[0] + num4[0]; i++) {
        if (ans[i] >= 10) {
            ans[i + 1] += ans[i] / 10;
            ans[i] %= 10;
        }
        if (ans[i] != 0) {
            ans[0] = i;
        }
    }
    for (int i = ans[0]; i > 0; i--) {
        cout << ans[i];
    }
    cout << endl;
    return 0;
}
