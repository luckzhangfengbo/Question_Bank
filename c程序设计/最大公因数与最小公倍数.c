/*************************************************************************
	> File Name: 最大公因数与最小公倍数.c
	> Author: zhangfb
	> Mail: 1819067326
	> Created Time: 一 11/23 22:30:57 2020
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int gcd(int n, int m);

int lcm(int n, int m);

int main() {

    int n, m;

    scanf("%d%d", &n, &m);

    printf("%d\n", gcd(n, m));

    printf("%d\n", lcm(n, m));

    return 0;

}

int gcd(int n, int m) {

    if (!m) return n;

    return gcd(m, n % m);

}

int lcm(int n, int m) {

    // 请在这里继续完成 lcm 函数

    return n * m / gcd(n, m);

}
